#include <iostream>
using namespace std;

class default_And_Param_Class{
int count;

public: // public having priv and public again

default_And_Param_Class(){

cout<<"Hello from default constructor "<<endl;

}
default_And_Param_Class(int p){

count = p;
cout<<"count value from param constructor "<<count<<endl;
}


~ default_And_Param_Class(){   // destructor called to delete the obj
cout << "Destroyed values"<<count<<endl;

}

};


class default_Class_Only{
int count;
double doubleCount;
public: // public having priv and public again

void checkPrivValue(){

cout<<"Checking default constructor value count:"<<count<<"doubleCount:"<<doubleCount<<endl;

}

};



int main()
{

default_And_Param_Class m1;
default_And_Param_Class m2(42); // defualt cons

default_Class_Only n1;
n1.checkPrivValue();

return 0; }
