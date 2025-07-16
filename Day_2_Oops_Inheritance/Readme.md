
---
# Day 2 OOP Review: 

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

# Inheritance: 

* In Derived class, we can't access base class private members - basics of encapsulation. Can only do Public.  But can be still accessed if public has a setter and getter method. If its a protected class, it can be accessed from the derived class. - like you can do a simple assign, but the same wont work for a private member. 
** Also for a base private 'c', we cant define its value from main() - So, any class which if it has to define the private variable from main - needs to have a public setter method set(value){c = value;}. Thus preserving, the private encapsulation through this indirect way of assigning the value to a private variable. 

See Inheritance_Basic.cpp - where set and get methods are used

Inheritance Access Specifiers Grid Map: 

<img width="685" height="472" alt="image" src="https://github.com/user-attachments/assets/bda0c2ab-07d6-412e-a894-4ca400f76376" />

In case of private inhertinace, every of base class become private to the derived and 

---

# 🌟 C++ Inheritance Access Cheat Sheet

This README explains how **public**, **protected**, and **private inheritance** affect access to base class members, with small example programs.

---

## 🔑 Base Class Setup

```cpp
class Base {
private:
    int priv = 1;
protected:
    int prot = 2;
public:
    int pub = 3;
};
````

---

## 1️⃣ Public Inheritance

```cpp
class Derived : public Base { ... };
```

* `public` → `public` in Derived
* `protected` → `protected` in Derived
* `private` → inaccessible

### Example

```cpp
#include <iostream>
using namespace std;

class Base {
private:
    int priv = 1;
protected:
    int prot = 2;
public:
    int pub = 3;
};

class Derived : public Base {
public:
    void show() {
        // cout << priv;  ❌ not accessible
        cout << "prot: " << prot << endl;  // ✅ accessible
        cout << "pub: " << pub << endl;    // ✅ accessible
    }
};

int main() {
    Derived d;
    d.show();
    cout << d.pub << endl;  // ✅ public stays public, accessible
    // cout << d.prot;      ❌ error: prot is protected
}
```

### Output

```
prot: 2
pub: 3
3
```

---

## 2️⃣ Protected Inheritance

```cpp
class Derived : protected Base { ... };
```

* `public` → `protected` in Derived
* `protected` → `protected` in Derived
* `private` → inaccessible

### Example

```cpp
#include <iostream>
using namespace std;

class Base {
private:
    int priv = 1;
protected:
    int prot = 2;
public:
    int pub = 3;
};

class Derived : protected Base {
public:
    void show() {
        cout << "prot: " << prot << endl;  // ✅ accessible
        cout << "pub: " << pub << endl;    // ✅ accessible (became protected)
    }
};

int main() {
    Derived d;
    d.show();
    // cout << d.pub;    ❌ error: pub is now protected
    // cout << d.prot;   ❌ error: prot is protected
}
```

### Output

```
prot: 2
pub: 3
```

---

## 3️⃣ Private Inheritance

```cpp
class Derived : private Base { ... };
```

* `public` → `private` in Derived
* `protected` → `private` in Derived
* `private` → inaccessible

### Example

```cpp
#include <iostream>
using namespace std;

class Base {
private:
    int priv = 1;
protected:
    int prot = 2;
public:
    int pub = 3;
};

class Derived : private Base {
public:
    void show() {
        cout << "prot: " << prot << endl;  // ✅ accessible (became private)
        cout << "pub: " << pub << endl;    // ✅ accessible (became private)
    }
};

int main() {
    Derived d;
    d.show();
    // cout << d.pub;    ❌ error: pub is now private
    // cout << d.prot;   ❌ error: prot is private
}
```

### Output

```
prot: 2
pub: 3
```

---

## 📊 Summary Table

| Inheritance Type | public →  | protected → | private →    |
| ---------------- | --------- | ----------- | ------------ |
| `public`         | public    | protected   | inaccessible |
| `protected`      | protected | protected   | inaccessible |
| `private`        | private   | private     | inaccessible |


Also check Inheritance_Access_Specifiers.cpp
---

✅ **Key Takeaways**

* Only public and protected members are inherited.
* Private members are never directly accessible, but you can expose them using base class getters/setters.
* Inheritance type controls how inherited members are seen in the derived class **and from outside.**

---




