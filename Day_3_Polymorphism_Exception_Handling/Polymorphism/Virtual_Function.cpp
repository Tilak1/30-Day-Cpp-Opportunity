#include <iostream>
using namespace std;

class Base
{
int a;
int b;

public:

    Base(){a=0;b=0;};

    Base(int a, int b){a=a;b=b;};

    int Length (int a, int b){
    return a+b;
    }

    int width (int a, int b){
    return a-b;
    }

     void area() {

    cout<<"Base Area:"<<5*a*b;

    }

};

class Derived : public Base {

int radius;

public:

Derived(int a, int b, int rad) : Base { a,  b} {radius=rad; };

void area ()  {
cout<<"Derived Area:"<<3.14*radius*radius;


}

};


int main(){

Base * ab= new Derived(2,3,4);

ab -> area(); // If virutal and override is there, it will call derived class

// Or else it will call Base class only - Not acting as expected

return 0;}
