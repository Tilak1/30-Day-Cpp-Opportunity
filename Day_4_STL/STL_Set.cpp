#include <bits/stdc++.h>

using namespace std;

// sorted and unique elements are stored in set
// all set operations happen in O(log n) time

// it is implemented using balanced binary search tree
// it does not support indexing
// it supports iterators
// it is used in finding unique elements in an array
// it is used in finding intersection of two arrays
// it is used in finding union of two arrays
// it is used in finding difference of two arrays
// it is used in finding symmetric difference of two arrays
// it is used in finding k largest/smallest elements in an array
// it is used in finding longest consecutive subsequence in an array
//  it is used in implementing sieve of Eratosthenes
// it is used in implementing Dijkstra's and Prim's algorithms
// it is used in implementing interval problems




int main(){
    set<int> s; 
    s.insert(5); 
    s.insert(1); 
    s.insert(10); 
    s.insert(10); // duplicate elements are not allowed in set

    s.insert(7); 
    s.insert(7); // duplicate elements are not allowed in set

    s.insert(3); 
    s.insert(5); // duplicate elements are not allowed in set 

    cout<<"Size of set:\t"<<s.size()<<endl; 

    cout<<"Elements in set are:\t"; 
    for(auto it:s){
        cout<<it<<" "; 
    }
    cout<<endl; 

    // searching in set 
    int key = 10; 
    if(s.find(key) != s.end()){
        cout<<key<<" is present in set"<<endl; 
    }
    else{
        cout<<key<<" is not present in set"<<endl; 
    }


    cout<<"------------------After erasing------------------"<<endl;

    auto it = s.find(7);
    s.erase(it);

    // erasing from set 
    //s.erase(5); 
    cout<<"Elements in set after erasing 7 are:\t"; 
    for(auto it:s){
        cout<<it<<" "; 
    }
    cout<<endl; 

    cout <<"--------------Erase with range------------------"<<endl;

    s.erase(s.find(3),s.find(10)); // erases from 3 to 10 (10 not included)
    // only erases 3 & 5 

    cout<<"Elements in set after erasing from 3 to 10 are:\t";
    for (auto it:s)
    {   
        cout <<it<<" "; 

    }



    // Count a number occurance in set 

    cout<<"Count of 10 in set:\t"<<s.count(10)<<endl; // 1 if present else 0
    cout<<"Count of 15 in set:\t"<<s.count(15)<<endl; // 1 if present else 0




    // lower bound and upper bound in set
    cout<<"Lower bound of 6 is:\t"<<*s.lower_bound(6)<<endl; // >= 6
    cout<<"Upper bound of 6 is:\t"<<*s.upper_bound(6)<<endl; // > 6

    // iterators in set
    cout<<"Using iterators to print elements in set:\t"; 
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" "; 
    }
    cout<<endl; 

    // reverse iterators in set
    cout<<"Using reverse iterators to print elements in set:\t"; 
    for(auto it = s.rbegin(); it != s.rend(); it++){
        cout<<*it<<" "; 
    }
    cout<<endl; 

    // erase 


    cout<<"Elements in set after erasing 7 using iterator are:\t";
    for (auto it:s)
    {
    cout<<it<<" ";
    }


    return 0;

}