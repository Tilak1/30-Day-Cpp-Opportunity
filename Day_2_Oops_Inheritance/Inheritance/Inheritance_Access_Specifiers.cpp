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


class DerivePublic : public Base {
};

class DerivedPrivate : private Base {
};


class DerivedProtected : protected Base {
};

int main()
{
// All works well

DerivePublic derivedPublicObj;
derivedPublicObj.setA(42);
derivedPublicObj.b = 42;
derivedPublicObj.display();

// Private inheritance - Doesn't work well - Not accessible in the main or in derived class ====- see the Inheritance Grid


DerivedPrivate derivedPrivateObj;

/*
derivedPrivateObj.setA(41);
derivedPrivateObj.b = 42;
derivedPrivateObj.display();*/

// Protected inheritance - Doesn't work well from main - Accessible in derived class ====- see the Inheritance Grid

DerivedProtected derivedProtectedObj;
//derivedProtectedObj.b=41; // Even public of base becomes protected


return 0;
}
