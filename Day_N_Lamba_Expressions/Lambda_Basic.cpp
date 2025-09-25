#include<bits/stdc++.h>

using namespace std;




int main(){
 

    // [=] captures all external variables by value
    // [&] captures all external variables by reference 
    // [&, =a, =b] captures all external variables by reference except a and b which are captured by value
    // [=, &a, &b] captures all external variables by value except a and b which are captured by reference
    //[this] captures the this pointer by value
    
    int n =2; 
    auto i = [n] (int arg) {return n*2* arg;}(3); 

    cout << " General Lambda value"<<i << endl;

    
    auto r = [&n] (int arg) {n = n*2; return n*2* arg;}(3); 

    cout << "Modifying N" << n << endl;

     // prpgram's variable captured in lambda expression
    // C++14 feature
    

    int z = 2;
    auto add_two = [y = z+2](int x){ return x + y;}(2); 

    cout << "Adding two to x:\n" << add_two<< endl;


    return 0; 
}