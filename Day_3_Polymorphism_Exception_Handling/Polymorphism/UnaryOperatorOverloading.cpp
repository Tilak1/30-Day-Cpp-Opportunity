
#include <iostream>
using namespace std;

class Base
{
int a;

public:

    Base(){a=0;};

    Base(int aAssign){a=aAssign;}


    Base operator++ () // pre inc
    {
        Base temp;
        a = a + 1; // called object's a incremented
        temp.a = a; // assigning to the new object to which this new value will be assigned
        return temp;
    }

    Base operator++ (int) // post inc
    {
        Base temp;
        temp.a = a; // assigning the
        a = a + 1; // called object's a incremented

        return temp;

    }

    void display()
    {
       cout<<"Base Numbers:"<< a <<endl;
    }

};

int main(){

Base num1(3),num2;
num1.display(); // a = 3


num2 = ++num1;
num2.display(); // a = 4


num2 = num1++;
num2.display(); // a = 4

return 0;

}
