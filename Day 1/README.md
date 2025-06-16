# Day 1: 

STL and Algorithm: 

* STL Containers:
  std::istream_iterator
  std:map
  std:list
  std:set
  std:vector and inbuilt vector's iterator

  '''
  * Random access iterator allows - --it, but other iterators won't. 
 

  vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator i = v.begin();  

    i = next(i); 
    cout << (*i) << " ";

    i = next(i, 2);
    cout << (*i) << " ";

    i = prev(i);
    cout << (*i) << " ";
    return 0;

   with a std::forward_list<int>::iterator and you’ll get a compile error, because forward_list only supports ++i.
    
    std::forward_list<int> fl = {1, 2, 3};
    auto it = fl.begin();
    // --it;   ❌ Compile error: no operator--
    

* Bidirectional Iterators
Container: list, map, set
    
    cpp
    Copy
    Edit
    #include <iostream>
    #include <list>
    
    int main() {
        std::list<int> lst = {1, 2, 3};
        auto it = lst.end();
        while (it != lst.begin()) {
            --it;
            std::cout << *it << " ";
        }
    }

  ![image](https://github.com/user-attachments/assets/43cfeca2-451b-4c4a-ba93-1e23addfaebf)

  '''

* STL & Algorithm libraries use c++ 'Template' to maintain the data agnostic setup. STL containers are built internally using class templates and algorithm functions are built internally using function templates. 
* sort and binary_search need start & end indexing.  


Templates: 



* Templates offer a way to write your code once and use it with various data types. Compiler will generate a new definition for the data type you use in the code. Atleast from the programmera perspective it will be data type agnostic. 
* STL containers are built internally using class templates and algorithm functions are built internally using function templates.
Function template: 

* Usage Ex: This is useful when you need the same operation, like sorting for various data types.

Exmaple 1:

#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y) {
  return (x > y) ? x : y;
}

int main() {
  cout << myMax<int>(3, 7) << endl;
  cout << myMax<char>('c', 'g') << endl;
  return 0;
}




Exmaple 2:
