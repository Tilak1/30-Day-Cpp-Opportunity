#include <iostream>
#include <vector>
using namespace std;


int main() {
    // Create a vector with some initial values
    std::vector<int> vec = {1, 3, 5, 7, 9};
    
    // Print original values
    std::cout << "Original vector: ";
    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // Modify each element using pointer in range-based for loop
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        *i += 2;  // Add 2 to each element
    }
    
    // Print modified values
    std::cout << "After adding 2: ";
    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // Another example: multiply each element by 3
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        *i *= 3;  // Multiply each element by 3
    }
    
    // Print final values
    std::cout << "After multiplying by 3: ";
    for (auto i : vec) {
        std::cout << i << " ";
    }
   std::cout << std::endl;
    
    cout<<"Editing Vector by Refferences"<<endl; 

    for( auto &i: vec)
        {
        i+= 2;  
        //cout << i << " ";

        }
    
        cout<<"Vector elements after adding 2 to each element: "<<endl;

        for (auto i: vec)
        {
            cout<<i<<" ";
        }

    cout<<"Editing Vector by DIrect Pointer to Vector Data"<<endl; 

    for (int *ptr = vec.data(); ptr < vec.data()+ vec.size(); ++ptr)
    {*ptr+=5;}

    cout<<"Vector elements after adding 5 to each element: "<<endl;

        for (auto i: vec)
        {
            cout<<i<<" ";
        }

           std::cout << std::endl;


    return 0;
}