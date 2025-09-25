#include<bits/stdc++.h>

using namespace std;

int main(){
 
vector<int> v = {1,2,3,4,5,6,7,8,9,10};

int radix = 3; 

// predicate to check even numbers i.e for every n in v if n%2 == 0 return true else false
// count_if is a STL algorithm which takes 3 arguments (start iterator, end iterator, predicate)

auto n_even = count_if(v.begin(),v.end(),[radix] (int n) {return n%2 == 0;}
);
cout<<"Even numbers here are:\t"<< n_even << endl; 

auto n_radix = count_if(v.begin(),v.end(),[radix] (int n) {return n%radix == 0;}
);

cout<<"Radix divisible numbers here are:\t"<< n_radix << endl; 


}