#include <bits/stdc++.h>

using namespace std;


int main()
{
vector<int> vect; 
vect.push_back(20);
vect.emplace_back(0); 
vect.emplace_back(3);  
vect.emplace_back(7); 

cout<<"vect.back():\t"<<vect.back()<<endl; 

//vector<int>::reverse_iterator it;

// printing way 1 

cout<<"Iterator print in normal order using rend"<<endl;
for (auto it =vect.rend()-1; it!=vect.rbegin()-1; it--)
{
    cout<<*it<<endl;
}

// printing way 2 
cout << "Vector elements are: "<< endl;
for (auto x:vect){

    cout<<x<<endl;
}

vector<pair<int,int>> vect2; 

vect2.push_back({1,2});
vect2.emplace_back(3,4);

for (auto x:vect2){
    cout << "Vector of pairs elements are: "<< endl;

    cout<<x.first<<"\t"<<x.second<<endl;
}

// erase 
//vect.erase(vect.begin()); // erases 2nd element - i.e deleting 2nd address in the vect 
// erase[ start, end] // last element is end-1 will be deleted and hence end is not included

cout<<"Elements after erase are:\n"; 
for (auto it:vect)
{
cout<<it<<endl; 

}

// insert
//vect.insert(vect.begin()+1,100); // inserts 100 at 2nd position
 
vect.insert(vect.begin()+1,2,100); // inserts 2 100's at 2nd and 3rd position

cout<<"Elements after insert are:\n"; 
for (auto it:vect)
{
cout<<it<<endl; 

}

// inserting one vecot into another 

vector<int> copy (2,100);

vect.insert(vect.begin()+2, copy.begin(), copy.end());

cout<<"Elements are:\n"; 
for (auto it:vect)
{
cout<<it<<endl; 

}


// vect.empty() ?

// vect.swap(v2); 
// vect.clear();

// vect.size()
// vect.capacity()
// vect.resize(n) - resizes the vector to contain n elements
// if n is greater than the current size, then the vector is expanded and new elements are added at the end
// if n is less than the current size, then the vector is reduced to its first n elements.
// vect.reserve(n) - reserves the space for n elements in the vector
cout<<"Size of vector:\t"<<vect.size()<<endl;
cout<<"Capacity of vector:\t"<<vect.capacity()<<endl;
vect.resize(4);
cout<<"Size of vector after resize:\t"<<vect.size()<<endl;
cout<<"Capacity of vector after resize:\t"<<vect.capacity()<<endl;
vect.reserve(10);
cout<<"Capacity of vector after reserve:\t"<<vect.capacity()<<endl;
    
cout <<"Elements after resize:\t"<<endl;




return 0 ; }
