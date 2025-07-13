//Pointers are bookmarks for computer memr
#include <iostream>
using namespace std;

int main(){

//int arr[]={1,2,3,4,5};


int *ptr = new int [3,4,5,6];

//ptr [] = {1,2,3,4,5};

for (int i =0; i< 5;i++)
{
    cout<<*(ptr+i)<<endl;

}


delete [] ptr;
return 0;}


