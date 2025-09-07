#include <iostream>
#include <array>

#include <vector>

#include <algorithm>

#include <list>

#include <stack>
#include <queue>

#include <set>
#include <map>


using namespace std;
int main()
{int n;
cout<< "Demo number choice:\n 1 - array \n 2 - vector\n list 3 \n stack 4 \n queue 5 \n set \n map 7 \n";
cin>>n;

switch(n){

case 1: {
array<int, 5> arr = {1,24,45,67,5}; //  it will be static in <array> ? for it to be dynamic - we have vector class

cout<<"arr size:"<<arr.size()<<endl;
cout<<"arra at [1]:"<<arr.at(1)<<endl;
cout<<"arr is empty ?:"<<arr.empty()<<endl;

cout<<"arr first element:"<<arr.front()<<endl;
cout<<"arr last element:"<<arr.back()<<endl;

break;
}

case 2: {

// Unlike <array>, <vector> is dynamic

vector<int> vect;
cout<<"Capacity of vetcor:"<<vect.capacity();

vect.push_back(20);

vect.push_back(0);
vect.push_back(2);
vect.push_back(200);

cout<<"Capacity of vetcor:"<<vect.capacity()<<endl;


// Normal print

cout<<"Printing all of vectors"<<endl;

for (int x:vect){

    cout<<x<<endl;
}

// Iterator based print

vector<int> :: iterator i; // i is of type vector<int>
cout<<"iterators print"<<endl;
for (i = vect.begin(); i<vect.end(); i++)
{cout << "Vect values via iterator:" << * i << endl;
}

// vect.clear();


cout<<"Capacity of vetcor after clear:"<<vect.capacity()<<endl;

// Sort

sort(vect.begin(),vect.end());

cout<<"Vect after sort:"<<endl;

for (i = vect.begin(); i<vect.end(); i++)
{cout << "Vect values via iterator:" << * i << endl;
}

// Binary search
bool result = binary_search(vect.begin(),vect.end(),30);
cout<<"Element 30 found ? \t"<<result<<endl;

// Reverse
reverse(vect.begin(),vect.end());
cout<<"Vect after reverse:"<<endl;

for (i = vect.begin(); i<vect.end(); i++)
{cout << "Vect inc :" << ++* i << endl;
}

// min and max elelent
cout<<"Minimum element: \t"<<*min_element(vect.begin(),vect.end())<<endl;

cout<<"Maximum element: \t"<<*max_element(vect.begin(),vect.end())<<endl;



break; }

// List:
// Double linked list - can be iterated front and back


// Forward List:
// Can be iterated only in forward direction

case 3: {

list<int> num = {1,2,3,4,5};
cout<<"for print"<<endl;

for (int i:num)
{
    cout<<i<<endl;
}

num.push_front(6);
num.push_back(16);


cout<<"Iterator print after push front and back"<<endl;

list<int>::iterator i;

for (i=num.begin(); i!=num.end(); i++)
{
        cout<<*i<<endl;
}


// copy to another list

list <int> num2 (num);



break; }

case 4: {

// stack
stack<int> s;

s.push(10);
s.push(100); s.push(5);s.push(1);

// This below iterator way of print wont work as stack doesnt contain iterator support

/* stack<int>::iterator k;
 *
 * for (i=s.begin(); i!=s.empty(); i++)
 * {
 * cout<<"Stack"<<*i<<endl;
 * }
 * }
 */


cout<<"Top element is: "<<s.top()<<endl;
s.pop();
cout<<"Top element after pop is: "<<s.top()<<endl;
cout<<"Stack size  is: "<<s.size()<<endl;

stack<int> s_copy = s;
// Because printing stack involves popping out, so take a copy if the original stack needs to be preserved.

cout<<"printing top.stack after popping\n";
while(!s.empty()){
    cout<<"Stack:"<<s.top()<<endl;
    s.pop();

}


cout<<"Stack is empty or not ?"<<s.empty()<<endl;




break;}


case 5: {

// queue FIFO nature
queue<int> s;

s.push(10);
s.push(100);
s.push(5);s.push(1);



cout<<"Top element is: "<<s.front()<<endl;
s.pop();
cout<<"Top element after pop is: "<<s.front()<<endl;
cout<<"queue size  is: "<<s.size()<<endl;

queue<int> s_copy = s;
// Because printing queue involves popping out, so take a copy if the original stack needs to be preserved.

cout<<"printing top.queue after popping\n";
while(!s.empty()){
    cout<<"queue:"<<s.front()<<endl;
    s.pop();

}


cout<<"queue is empty or not ?"<<s.empty()<<endl;




break;}



case 6: {

// queue FIFO nature
//set <int> s; // ascending

set <int,greater<int>> s; // descening


s.insert(10);
s.insert(10);
s.insert(1);
s.insert(2);
s.insert(43);
// only unique elelents are stored in set and also in a as
cout<<"s1 print"<<endl;
for (int i:s){
    cout<<"Set:"<<i<<endl;
}

//copy the set:

set<int,greater<int>> s2 (s.begin(),s.end());

cout<<"s2 copy of s1 print"<<endl;

for (int i:s2){
    cout<<"Set s2:"<<i<<endl; // we see its ascending
}

// erase

s2.erase(s2.begin(), s2.find(2));
cout<<"s2 after erase uptill 2"<<endl;

for (int i:s2){
    cout<<"Set s2:"<<i<<endl; // we see its ascending
}


break;
}


// maps - key & value

case 7: {

map<int,string> m;

// cretaing 4 pairs
m.insert(pair<int,string>(1,"c"));
m.insert(pair<int,string>(2,"c++"));
m.insert(pair<int,string>(3,"cuda"));
m.insert(pair<int,string>(4,"rust"));

// size
cout<<"szie"<<m.size()<<endl;


//find key

cout<<"Finding key 3 in map:"<<m.count(3)<<endl; // shows binary 0 / 1 acc

// iterating all throguh pairs

cout <<"printing all of key & value pairs using iterators"<<endl;

map<int,string>::iterator i;

for(i=m.begin(); i!=m.end(); i++)
cout<<"Key:\t"<<i->first<<"\nValue:\t"<<i->second<<endl;

// finding value for a patulcar key
// find value by a key value as - find() iterator allows for (const int&) which is only key

i = m.find(3);
cout<<"Finding Key:\t"<<i->first<<"\nFound Value:\t"<<i->second<<endl;


//Note:
// if we want to do the same with value
// i = m.find("cuda");
// this is not accepted. So go thrugh all of map searching for the value



// finding value for a paticular value
std::string searchValue= "cuda";

for(i=m.begin(); i!=m.end(); i++)
{
if (i->second ==searchValue){

cout<<"Found Key for CUDA:\t"<<i->first<<endl;
}

}




break ;
}


default: cout <<"Invalid choice"<<endl;

}


return 0;

}
