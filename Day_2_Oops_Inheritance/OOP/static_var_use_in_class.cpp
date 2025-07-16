#include <iostream>
using namespace std;

class myClass{

public: // public having priv and public again

    static int count;  // making sure it can be init from outside the class ad also callable from private function

private:

void increment()
{
    count++;
    cout<<"count:"<<count<<endl;


}

public:

    void normal_display(){
    increment();
    }
};

int myClass::count = 3; // since declared public  it is callable from a global scope

int main()
{

myClass m1,m2,m3;
m1.normal_display();
m2.normal_display();
m3.normal_display();

return 0; }
