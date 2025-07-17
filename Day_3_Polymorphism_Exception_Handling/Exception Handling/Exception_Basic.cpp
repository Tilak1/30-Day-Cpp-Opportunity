#include <iostream>

using namespace std;


int divide(int x, int y){

if (y==0){
throw 0;
}

if (y==0.0){
throw 0.0;
}
int result = x/y;

cout <<"Result:"<<result;


}

int main(){

int num,den;

cout << "Enter Num and Den"<<endl;
cin >> num >> den;


try{
divide (num,den);
}

catch (int e){

cout << "Exception occured to Int Den value: "<<e << endl;

}


catch (double e){

cout << "Exception occured to double Den value: "<<e << endl;

}



return 0;}
