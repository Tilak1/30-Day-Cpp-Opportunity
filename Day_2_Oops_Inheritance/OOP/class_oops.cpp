#include <iostream>
using namespace std;

class Car{

int price;

public:

void carprice(int p){

price = p;

cout << "Car price is"<<price<<endl;


}
void carHorn(){
    cout<<"Hello"<<endl;
    }


};

int main (){

Car hello;
hello.carprice(100);



return 0;}
