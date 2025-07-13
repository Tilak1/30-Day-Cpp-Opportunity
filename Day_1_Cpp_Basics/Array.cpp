#include <iostream>
using namespace std;

int main(){

int arr [5];

for(int i = 0; i<5; i++)
{
cout<<"Enter Element [i]" << i << endl;
cin >> arr[i];
}

//printing numbers

for (auto num: arr)  // for fruit in fruits - like a for each loop in python - here in c++ = we have this !!
{
cout<<"Element i"<<num<<endl;
}

int sum = 0;
for (auto num: arr)  // for fruit in fruits - like a for each loop in python - here in c++ = we have this !!
{
    sum += num;
}
cout<<"Sum:"<<sum<<endl;

return 0;}
