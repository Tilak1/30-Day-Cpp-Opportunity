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

    virtual int area ()=0;

};

class Derived : public Base {

int radius;

public:

Derived(int a, int b, int rad) : Base { a,  b} {radius=rad; };

int area () override {
return 3.14*radius*radius ;
}

};


int main(){

// Base ab;

//cout<<"Result of add"<<ab.add(3,5)<<endl;

//cout<<"Result of add"<<ab.add(5.50,4.50)<<endl;

Derived db(2,3,5.6);

cout<<"Derived Overiride class area: "<<db.area()<<endl;

return 0;}
