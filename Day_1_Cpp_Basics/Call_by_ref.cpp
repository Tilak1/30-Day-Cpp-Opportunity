#include <iostream>
#include <string>

using namespace std;

void mul(int *ptr)
{
*ptr = *ptr * 2;
}

int main(){
int n = 2;

cout<<"Before calling num()"<<n<<endl;

mul(&n);


cout<<"After calling num()"<<n<<endl;


return 0;}
