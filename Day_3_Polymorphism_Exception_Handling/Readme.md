
# 🧩 Day 3 Polymorphism & Inheritance in C++

> **Note:** In inheritance, you **can't "overwrite" a base class variable** with a derived class variable in a polymorphic way.

## What is Polymorphism?

Polymorphism allows:

✅ Different objects to access one class in different ways  
✅ A single interface to represent **different types of objects**

---

## ⚡ Compile-time / Static Polymorphism

The decision on **which function to load** is decided at **compile time**, based on:

- Function signature
- Type of argument passed

**Examples:**  
- Function overloading  
- Operator overloading

---

### 🔧 Function Overloading

```cpp
int add(int a, int b);
double add(double a, double b);

---

### ➕ Operator Overloading

#### Unary Operators (pre and post ++)

```cpp
TestClass operator++();      // Pre-increment
TestClass operator++(int);   // Post-increment
```

* Since operations are done on class objects,
  ➤ Return type is a class object.
  ➤ Inside these functions, a temporary class object is created, operations are performed, and the new value is assigned to it and returned.

**Main calls:**

```cpp
Test num1(20), num2;
num2 = num1++;  // Post-increment
num2 = ++num1;  // Pre-increment
```

*See `UnaryOperatorOverloading.cpp`*

---

#### Binary Operators (e.g., +, -)

```cpp
Test operator+(Test n) {
    Test temp;
    temp.number = number + n.number;
    return temp;
}
```

**Main:**

```cpp
num3 = num1 + num2;  // Translates to: num1.operator+(num2)
```

*See `BinaryOperatorOverloading.cpp`*

---

### 🚫 Operators that Can't Be Overloaded

<img width="1545" height="930" alt="image" src="https://github.com/user-attachments/assets/a53b97e3-c643-4b74-bcf1-339f0d0d2af7" />

---

## ⏳ Dynamic / Run-time Polymorphism / Late Binding

At runtime, **depending on the actual type of the object**, the method to call is decided.

* Virtual functions
* Method overriding

---

### 🐾 Method Overriding

```cpp
class Animal {
    void makeSound();
};

class Cat : public Animal {
    void makeSound();
};
```

**Main:**

```cpp
Animal* ptr;
Cat myCat;
ptr = &myCat;

ptr->makeSound();  
// ❗ Without virtual, calls Animal::makeSound()
```

---

### 🌐 Virtual Functions

A **virtual function** in base class allows the **derived class definition** to be reflected when called.

```cpp
class Animal {
    virtual void makeSound();
};

class Cat : public Animal {
    void makeSound() override;
};
```

Now, the base pointer points to the derived class method.

---

## 📜 Abstract Class

* A class with **at least one pure virtual function**.
* **Can't be instantiated** on its own.
* Derived class:

  * Must **override** pure virtual functions.
  * Can **pass base class values** via derived class constructor using inheritance.

**Analogy:**
Like helping a neighbor in COVID who can’t go out, but you (unaffected) get supplies and pass them on 😄.

*See `AbstractClass.cpp`*

---

## 💡 Additional Info

* **Slower execution** due to dynamic dispatch overhead (e.g., virtual table lookups).
* **More flexible,** as behavior can change dynamically based on object’s runtime type.

---

✅ **Summary:**
✔ Compile-time: Function / operator overloading
✔ Run-time: Virtual functions, abstract classes, dynamic dispatch
✔ Flexible design patterns, but with a small performance trade-off

```

