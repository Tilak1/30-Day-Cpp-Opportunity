
---
# 🚀 Day 1 – C++ Basics


C++ is a **statically typed** language. Unlike dynamic languages (which offer flexibility as variable types can change during execution), C++ checks types **at compile time**, enabling optimizations and predictable behavior.

### 🧠 Is C++ Completely Static?

Not entirely. C++ also supports **dynamic behavior** through:

- **Virtual Functions**: Enable dynamic polymorphism — the correct function is selected at runtime based on object type.
- **RTTI (Run-Time Type Information)**: Allows inspection of object types during runtime.

---

## 📦 Variables

![Variables](https://github.com/user-attachments/assets/385e9c41-0685-4e34-9766-8793e430ac15)

---

## 🔑 Keywords

### `static`
- Memory is initialized **once** and persists across function calls.
- Memory is allocated in the **data segment**, not on the stack.
- Useful for caching/memoization.

```cpp
#include <iostream>
#include <vector>

int fibonacci(int n) {
    static std::vector<int> memo(100, 0); // cache
    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    std::cout << "Fibonacci(10): " << fibonacci(10) << std::endl;
    std::cout << "Fibonacci(10): " << fibonacci(10) << std::endl;
    return 0;
}
````

* **Static global variables**: Limited to file scope — not accessible outside.

---

## 🆚 `const` vs `#define`

* `#define`: Textual replacement, no type safety.
* `const`: Type-safe, scoped, and debuggable.

![const vs macro](https://github.com/user-attachments/assets/cd0ff904-589e-44ca-ace2-87761f29c83a)

---

## 🪄 `auto` Type Deduction

* Deduces type from initializer.
* Great for long STL types or lambda captures.
* Beware: `auto` uses **default type rules** for literals.

```cpp
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    auto a = 3;                 // int
    auto b = 0.2f;              // float
    auto c = 3.9876543245;      // double
    auto d = 23456789987654LL; // long long

    if ((typeid(a) == typeid(int)) &&
        (typeid(b) == typeid(float)) &&
        (typeid(c) == typeid(double)) &&
        (typeid(d) == typeid(long long)))
        cout << "verified\n";

    return 0;
}
```

📌 Use suffixes like `f`, `LL`, `u` to guide `auto`.

---

## 🔢 Literals

### Integer

* **Prefixes**:

  * `013` → Octal
  * `0b11` → Binary (C++14+)
  * `0x23A` → Hexadecimal

* **Suffixes**:

  * `124u` → Unsigned int
  * `124L` → Long
  * `124LL` → Long long

### Floating Point

| Literal  | Type                |
| -------- | ------------------- |
| `3.14`   | double              |
| `3.14f`  | float               |
| `2.1e-3` | double (scientific) |

---

## 🔡 Char & Wide Char

Used for Unicode and non-ASCII characters:

```cpp
wchar_t chr = L'é';
wchar_t* myWideString = L"Hello, world!";
```

![Wide Char](https://github.com/user-attachments/assets/41a6699b-9a7c-4a7a-aa0c-9a7e6a0782b3)

---

## 🧠 Memory Allocation

| Region       | Used for                           |
| ------------ | ---------------------------------- |
| Stack        | Local variables, fast, auto-free   |
| Heap         | `new`, `malloc`, manual management |
| Data Segment | Static/global variables            |

---

## 📏 Data Types

| Type                 | Notes                                        |
| -------------------- | -------------------------------------------- |
| `float` / `double`   | 32-bit / 64-bit precision                    |
| `unsigned long long` | 64-bit unsigned                              |
| `__int128_t`         | 128-bit integer (non-standard, cryptography) |
| `wchar_t`            | Unicode characters                           |

---

## 🌍 `extern` Keyword

Used to reference a variable **declared elsewhere**:

```cpp
extern int sharedCounter;
```

![extern](https://github.com/user-attachments/assets/5bab6271-7837-4e23-9172-5ed79d3634e6)

---

## 🧾 Scope Rules

* Every `{}` block (functions, loops, conditionals) introduces a **new scope**.
* Inner scopes can access outer scope variables.
* Inner variables **cannot** be accessed outside their block.

---

## 📚 References

* [GeeksForGeeks – C++](https://www.geeksforgeeks.org/c-plus-plus/)

---

