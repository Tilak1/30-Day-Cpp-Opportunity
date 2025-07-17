

#include <iostream>
using namespace std;

class Base
{
int a;

public:

    Base(){a=0;};

    Base(int aAssign){a=aAssign;}


    Base operator++ ()
    {
        Base temp;
        a = a + 1; // called object's a incremented
        temp.a = a;
        return temp;
    }

    Base operator+ (Base n) // This operator overloading unlike Unary is dealing with 2 objects and hence we need a object type in the argument
    {
        Base temp;
        temp.a = a + n.a; // Here new object a = called object a + argument object a;
        return temp;

    }

    void display()
    {
       cout<<"Base Numbers:"<< a <<endl;
    }

};

int main(){

Base num1(3),num2(2),num3;
num1.display(); // a = 3

num2.display(); // a = 2

num3 = num1+num2;
num3.display(); // a = 5


return 0;

}
