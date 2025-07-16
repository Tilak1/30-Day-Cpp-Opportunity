#include <iostream>
using namespace std;

class Base{

int a;

public:
    int b;

    void setA(int value){
    a = value;
    }

    int printA() {
        return a;
        }

    void display(){
    cout<<"Base class values"<<"a:"<<a<<"b:"<<b<<endl;
    }
};

class Derived : public Base{

public:

void displayDeirved () {
    cout<<"Derived class values"<<"a (Base Private) "<<printA()<<"b:"<<b<<endl;

    }
};



int main(){

Base obj1;
obj1.setA(42), obj1.b = 41;
obj1.display();

Derived obj2;
obj2.setA(1); // Base private set using base public setter finction
obj2.b=2;
obj2.displayDeirved(); // This will inturn call Base's getA print method to get the Base class's priv A

// Dsilaying the base class var to show the change again in a & b values - after a fresh value assign by the Derived
obj2.display();

return 0; }
