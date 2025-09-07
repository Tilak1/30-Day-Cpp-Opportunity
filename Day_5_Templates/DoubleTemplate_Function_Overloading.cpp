#include <iostream>

using namespace std;

/*
template <typename T>

T findMax(T a, T b)
{
 return (a > b) ?a:b;

}
*/

template <typename X, typename Z>

Z findMax(X a, Z b)
{
 return (a > b) ?a:b;

}



int main(){

int result = findMax(8,2);
double dresult = findMax(4.3,6.8);

double MixedDataTyperesult = findMax<int,double>(4,12.8);


cout <<"nt result:"<<result<<endl;
cout <<"double result:"<<dresult<<endl;


cout <<"MixedDataTyperesult:"<<MixedDataTyperesult<<endl;

return 0;

}
