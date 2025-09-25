#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

// chrono library is used to measure time intervals in C++
// high_resolution_clock, duration, time_point are the main components
// high_resolution_clock provides the smallest tick period available
// duration represents a time interval
// time_point represents a point in time
// duration_cast is used to convert between different duration types
// Example usage:
// auto start = high_resolution_clock::now();
// // code block to measure
// auto end = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(end - start);




int main()
{
    auto start = high_resolution_clock::now();

    // Code block to measure time
    for (int i = 0; i < 1000000; ++i) {
        // Simulating some work
        volatile int x = i * i;
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Time taken by code block: " << duration.count() << " microseconds" << endl;

    std::vector<int> vec{1,3,5,7,8,9,10};

    for( *i: vec)
        {
        *i+= 2;  
        //cout << i << " ";

        }
    
        cout<<"Vector elements after adding 2 to each element: "<<endl;

        for (auto i: vec)
        {
            cout<<i<<" ";
        }





















    return 0;



}