
---
# Day 2 OOP Review: 

````markdown
# 🛠️ C++ OOPs Quick Notes

This document summarizes key C++ OOP concepts with explanations, images, and code snippets.

---

## 🔐 Access Specifiers

Access specifiers define **how much** and **where** each of the class members (data + functions) are available.

<img width="1075" height="352" alt="image" src="https://github.com/user-attachments/assets/e368fa65-e6c5-4b6c-8002-a21aa9774260" />

👉 **Note:**  
Unless the class functions are declared under `public`, the member functions **cannot be called in a `main()` function**.

---

## 💡 Abstraction and Encapsulation

<img width="1255" height="275" alt="image" src="https://github.com/user-attachments/assets/ab255651-433e-4ee1-a2a0-20a33a90571e" />

---

## 🏷️ Static Variable and Function

### Static Variable

- **Why?** When we need a single copy of value across the program.
- **Where?** To keep count of class instances or hold class-wide shared flags.

Example program: `static_var_use_in_class.cpp`

✅ Declaration (inside class, can be `private`):
```cpp
class MyClass {
    static int staticVar;  // private by default
};
````

✅ Definition (outside class, required even if private):

```cpp
int MyClass::staticVar = 100;  // definition, allowed even if private
```

✅ Access (inside class or friends only if private):

```cpp
class MyClass {
    static int staticVar;
public:
    static void display() {
        cout << staticVar;  // ✅ allowed
    }
};
```

❌ Direct access outside the class (if private):

```cpp
cout << MyClass::staticVar;  // ❌ error: staticVar is private
```

---

### 📦 Example

```cpp
#include <iostream>
using namespace std;

class MyClass {
    static int staticVar;
public:
    static void display() {
        cout << "Static variable value is " << staticVar << endl;
    }
};

int MyClass::staticVar = 100;  // definition

int main() {
    MyClass::display();  // OK
    // cout << MyClass::staticVar;  // ❌ error: private access
    return 0;
}
```

---

### Static Function

* **What?** Belongs to the class, **not** to the instances.
* **How to call?** Only by class name: `MyClass::function()`.
* **Limitation:** Cannot access non-static members.
* **Where?** For functions reflecting overall class state like shared resources, flags, or class-level counters.

---

## 🕳️ Bypassing Encapsulation (⚠️ Use cautiously)

* **Friend Class:** When a function in another class wants to access private members.

  ```cpp
  friend class Class2;
  ```
* **Friend Function:** When an independent function outside the class needs access to private members.

  ```cpp
  friend void someFunction();
  ```

---

## ⚙️ Constructor

* If no constructor is defined, C++ will create a default one and **assign garbage/default values** to the data members.
* Always define a parameterized or explicit constructor to avoid letting the compiler assign unknown values.
* **Constructor Overloading:** A class can have multiple constructors with different parameter lists.
* **Important:** You **cannot** call a constructor explicitly like a function; it is called **implicitly** when the object is created.

---

## 🧹 Destructor

* **Why?** To release resources acquired during the program when the object goes out of scope or is deleted.
* Can also be called explicitly when using multiple instances and needing cleanup before program end.
* Typically called **at the end of the `main()` function** when objects are destroyed.

---

