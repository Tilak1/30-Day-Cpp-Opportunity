#include <iostream>
using namespace std;

template <typename T>


Struct Pair {

T x,y; // Assigning to local Template T from object's scope 
        
Pair (T i, T j)
{
x = i; 
y = j; }

T getFirst(); 
T getSecond() 

{ return y; }


}; 


// Doing outside class function definition - so need to use the class name to access the functions
// And the double use of template class again to delcare same T again

T Pair<T>::het 

template <typename T1>

T1 Pair<T1>::getFirst()
{
    return x;
}



int main()

{
Pair<int> p1(10,20); 
cout<<p1.getFirst()<<""<<pl.getSecond(); 
return 0; 
}
