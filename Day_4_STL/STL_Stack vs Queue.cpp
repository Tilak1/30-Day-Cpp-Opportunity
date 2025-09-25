#include <bits/stdc++.h>

using namespace std;


// all stack operations happen in O(1) time

int main()
{
    
    stack<int> s; 
    queue<int> q; 

    s.push(10);
    s.push(100);
    s.push(5);s.push(1);
    s.emplace(500); // similar to push but faster
    
    cout << "Primtinv alleleel,nts in stack"    << endl;
  

    cout<<"Top:\t"<<s.top()<<endl;
   // cout<<"index try:\t"<<s[3]<<endl; // gives error as stack does not support indexing

    // cout<<"index try:\t"<<q[3]<<endl; // gives error as queue does not support indexing
    s.pop();
    cout<<"Stack TOP after pop:\t"<<s.top()<<endl;

cout <<"------------------Queue operations------------------"<<endl;

    q.push(10);
    q.push(100);
    q.push(5);q.push(1);
    q.emplace(500); // similar to push but faster
    cout<<"Front Before:\t"<<q.front()<<endl;

    cout<<"Back Before:\t"<<q.back()<<endl;
    // cout<<"index try:\t"<<q[3]<<endl; // gives error as queue does not support indexing

    q.pop();
    cout<<"Front after pop:\t"<<q.front()<<endl;
    cout<<"Back after pop:\t"<<q.back()<<endl;

    // Here pop takes out the front - FIFO right ? 


}
