#include<bits/stdc++.h>

using namespace std;

// Two ways to modify a variable outside the lambda function
// 1. Using reference variable. Int x; Int & y = x; y = 10; Now x is also 10. Here Int &y = x is called lvalue refference in C++. But in C++11 we also have rvalue refference using && operator.
//   Example: Int && y = 10; Here y is rvalue refference. 
// Use of rvalue refference is in move semantics and perfect forwarding.
// perfect forwarding is used in template programming.
// Move semantics is used to move the resources of one object to another object without making a copy


// 2. Using pointer variable. Int x; Int *p = &x; *p = 10; Now x is also 10. 




int main(){
 
int x =5; 
int &ref = x;
ref = 10;

cout << "Value of x is:\t"<< x << endl;
cout << "Value of ref is:\t"<< ref << endl;

cout << "------- Refference change after lamda function--------" << endl;

cout << "Value of x, before lamda capture by ref is:\t"<< x << endl;
cout << "Value of ref, before lamda capture by ref is:\t"<< ref << endl;

auto z = [](int &n) {n = n*2; return n;}(ref);

cout << "Value of z is:\t"<< z << endl;

cout << "Value of x, after lamda capture by ref is:\t"<< x << endl;
cout << "Value of ref, after lamda capture by ref is:\t"<< ref << endl;

cout << "------- Normal Pointer change after lamda function--------" << endl;

int k = 8; 
int *p = &k; 

cout<< "Value of k, before lamda capture by pointer is:\t"<< k << endl;
cout<< "Value of p, before lamda capture by pointer is:\t"<< *p << endl;


auto y = [](int *n) {(*n) = (*n)*2; return *n;} (p);

cout<< "Value of y is:\t"<< y << endl;
cout<< "Value of k, after lamda capture by pointer is:\t"<< k << endl;
cout<< "Value of p, after lamda capture by pointer is:\t"<< *p << endl;

cout << "--------- Ravlue Refference change after lamda function--------" << endl;

int a = 7;
int &&rref = 10; // rvalue refference
rref = a; // now rref is lvalue

// auto n = [](int &&m) {m = m*2; return m;}((rref)); // std::move is used to convert lvalue to rvalue
// This will give error because rref is lvalue now

cout << "Value of rref before move lambda is:\t"<< rref << endl;

// using std::move to convert lvalue to rvalue
auto n = [](int &&m) {m = m*2; return m;}(std::move(rref)); // std::move is used to convert lvalue to rvalue

cout << "Value of n is:\t"<< n << endl;
cout << "Value of rref after lambda is:\t"<< rref << endl;

return 0; 
}

