#include <bits/stdc++.h>

using namespace std;

// pairs lie in utility header file
// #include <utility>
// but it is already included in bits/stdc++.h
// so no need to include it again
// pairs are used to store two values in a single variable
// very useful in maps and other STL containers
// pairs can be nested also


int main()
{

    // simple pair     
    pair <int, int > p1 = {1,3}; 
    cout << "Pair 1st element: " << p1.first << endl;
    cout << "Pair 2nd element: " << p1.second << endl;

    // Nested pair 

    pair <int, pair<int,int> > p2 = {1,{3,4}};

    cout << "Pair 1st element: " << p2.first << endl;
    cout << "Pair 2nd element 1st part: " << p2.second.first << endl;
    cout << "Pair 2nd element 2nd part: " << p2.second.second << endl;

    // pair being stored in array index 

    pair <int, int > arr [] = {{1,2},{3,4},{5,6}}; 

    cout<<"Array of pairs"<<endl;
    for (int i=0; i<3; i++)
    {
        cout << "Pair " << i+1 << " : " << arr[i].first << ", " << arr[i].second << endl;
    }

    return 0; 
}
