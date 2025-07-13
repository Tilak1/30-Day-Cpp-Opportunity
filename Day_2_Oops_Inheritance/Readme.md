
---

# 📘 Day 1: C++ Basics, STL & Templates

## C++ Basics: 
* Unlike C, C++ offers exception handling, template based data type independent code, wide STL algo support. 
* This line imports the entire std namespace into the program's current scope. The std namespace contains all the standard C++ library functions and objects like cout and cin.
*     By including this line, you can directly write cout instead of std::cout.


## 🔧 STL and Algorithms
* Commonly used data structures are available lists, stacks, maps etc

### ✅ Common STL Containers

* `std::istream_iterator`
* `std::map`
* `std::list`
* `std::set`
* `std::vector` (with random access iterator)

---

### 🔄 Iterators in STL
![image](https://github.com/user-attachments/assets/67cde477-5a66-4a62-8de9-d8c623271218)

#### 🔹 Random Access Iterator (e.g., `std::vector`)

Random access iterators support:

* `++it`, `--it`
* `it + n`, `it - n`
* `std::next(it, n)` and `std::prev(it, n)`

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator i = v.begin();

    i = next(i);           // points to 20
    cout << *i << " ";

    i = next(i, 2);        // points to 40
    cout << *i << " ";

    i = prev(i);           // points to 30
    cout << *i << endl;

    return 0;
}
```

> ❌ Not supported with `std::forward_list`:

```cpp
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl = {1, 2, 3};
    auto it = fl.begin();
    // --it; // ❌ Compile error: no operator--
}
```

---

#### 🔸 Bidirectional Iterators

**Containers**: `std::list`, `std::map`, `std::set`

```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {1, 2, 3};
    auto it = lst.end();

    while (it != lst.begin()) {
        --it;
        cout << *it << " ";
    }
}
```

---

### ⚙️ STL Internals & Templates

* STL containers are implemented using **class templates**
* STL algorithms (like `sort`, `binary_search`) are built using **function templates**
* This enables **type-agnostic**, reusable code.

---

## 🧠 C++ Templates

### ✨ Why Templates?

Templates allow you to write **generic code** that works with any data type. The compiler will automatically generate the correct type-specific version of your function or class.

### 🔧 Function Template Example

```cpp
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
```

---

## 📌 Notes

* `sort` and `binary_search` need both **start** and **end** iterators
* Iterators are classified based on capabilities:
  Input, Output, Forward, Bidirectional, and Random Access
* `std::vector` supports full range of iterator operations (random access)

---
