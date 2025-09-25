#include <bits/stdc++.h>

using namespace std;


// all priority queue operations happen in O(log n) time except for top() which is O(1)
// Here it is not a linar container like stack or queue but a heap data structure i.e it has a tree inside for sorting how the data is stored. 
// By default it is a max heap but can be made a min heap using greater<int> as shown below
// It does not support iterators or indexing
// It is used in Dijkstra's and Prim's algorithms
// It is also used in heap sort algorithm
// It is also used in implementing median in a stream of data
// It is also used in implementing k largest/smallest elements in an array
// It is also used in implementing k closest points to origin
// It is also used in implementing k most frequent elements in an array

// 

int main()
{

    priority_queue<int> pq; 

    priority_queue<int,vector<int>,greater<int>> mpq; 

    pq.emplace(3); 
    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(2);

    cout<<"------------------Max Heap------------------"<<endl; 

    cout<<"Size of priority queue:\t"<<pq.size()<<endl;
    cout<<"Top element of priority queue:\t"<<pq.top()<<endl;

    pq.pop();
    cout<<"Top element of priority queue after pop:\t"<<pq.top()<<endl;

    cout<<"Size of priority queue:\t"<<pq.size()<<endl;


    cout <<"------------------Min Heap------------------"<<endl;

    mpq.emplace(3);
    mpq.push(5);
    mpq.push(1);
    mpq.push(10);
    mpq.push(2);

    cout<<"Size of min priority queue:\t"<<mpq.size()<<endl;
    cout<<"Top element of min priority queue:\t"<<mpq.top()<<endl;
    mpq.pop();
    cout<<"Top element of min priority queue after pop:\t"<<mpq.top()<<endl;
    cout<<"Size of min priority queue:\t"<<mpq.size()<<endl;
    return 0;

} 
