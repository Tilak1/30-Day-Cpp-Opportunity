#include <iostream>
using namespace std;

// search for target and if found return the index

int main(){

int arr [5];

for(int i = 0; i<5; i++)
{
cout<<"Enter Element [i]" << i << endl;
cin >> arr[i];
}

int target;
cout<<"Enter the element to search";
cin >> target;

int c;
for (c=0;c<5;c++)
{
    if (arr[c] == target){

        break;
    }
}

cout<<"Max in array index:"<<c+1;

return 0;
}
