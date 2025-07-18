#include <iostream>
using namespace std;

template <typename T>
struct Pair {
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

template <typename T>
//Syntax:  Return_type templateClass::templateClassFunction()
T Pair<T>::getFirst()
{
    return x;
}
int main()

{
Pair<int> p1(10,20); 
cout<<p1.getFirst()<<"\t"<<p1.getSecond(); 
return 0; 
}
