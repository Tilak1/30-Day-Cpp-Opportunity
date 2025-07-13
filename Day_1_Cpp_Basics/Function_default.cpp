#include <iostream>
#include <string>

using namespace std;

void Assign(string name, int age = 25, string city = "Delhi" );

void Assign(string name, int age, string city){
cout<<"Name:"<<name<<" "<<"Age:"<<age<<" "<<"City:"<<city<<endl;
}


int main(){


Assign("Akash",27);
Assign("Beu");
Assign("Akash1",26);



return 0;}
