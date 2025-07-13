#include <iostream>
using namespace std;

int main(){
int num[5] = {1,5,3,4,10};

// get size

int n = sizeof(num)/sizeof(int);
// find max

int max =num[0];

/*for (int i = 0; i< n;i++ )
{
// recursive sort
if(num [i]>max)
{

max = num [i];

}*/

for (auto i: num )
{
    if (i > max)
        max = i;
}




// print max
cout << "Max :" << max;


return 0;}
