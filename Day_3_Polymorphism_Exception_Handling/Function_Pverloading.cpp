#include <iostream>
using namespace std;

class Base
{

int a;
int b;


public:

    int add (int a, int b){
    return a+b;
    }


    int add (double a, double b){
    return a+b;
    }
};




int main(){

Base ab;
cout<<"Result of add"<<ab.add(3,5)<<endl;

cout<<"Result of add"<<ab.add(5.50,4.50)<<endl;

return 0;}
