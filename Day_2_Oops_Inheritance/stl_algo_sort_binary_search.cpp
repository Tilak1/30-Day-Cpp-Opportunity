#include <iostream>
#include <algorithm>
#include <string>

using namespace std; 

int main(){

int arr [] = {8,20,0,12,9}; 
sort(arr,arr+5); 
  
cout << "printint the array"<<endl; 
  
int n = sizeof(arr)/sizeof(arr[0]);  
 
cout << "len of arr:\t"<<n<<endl; 
  
for (int i =0; i<n; i++)
{
cout<<"arr[i]"<<arr[i]<<endl; 
}
  
if(binary_search(arr,arr+5,30))
	cout<<"item found"<<endl; 
else 
  	cout<<"item not found"<<endl; 
return 0; }
