
---

# 📂 C++ Exception Handling and File I/O Examples

This repository contains simple C++ programs demonstrating:

✅ Basic and advanced exception handling
✅ Input validation
✅ File input/output (I/O) operations

---

## 📄 Files

### 1️⃣ `Exception_basic.cpp`

* **Description:**
  Basic int function for division with simple exception handling.

* **Highlights:**

  * Throws `int` if integer division denominator is zero.
  * Throws `double` if floating-point division denominator is zero.
  * Catches and displays the exception type.

* **Example Run:**

  ```
  Enter Num and Den
  10 0
  Exception occurred to Int Den value: 0
  ```

---

### 2️⃣ `Exception_Advanced.cpp`

* **Description:**
  Advanced exception handling with clean input validation using `std::istringstream` and `std::is_floating_point`.

* **Highlights:**

  * Safely reads numeric input from the user (avoids bad input).
  * Uses `if constexpr` for compile-time type checking. Check the below ref reg the use of 'constexpr'
  * Catches floating-point division by zero.

* **Example Run:**

  ```
  Enter numerator: 10
  Enter denominator: 0
  Exception caught: Division by zero for floating-point denominator: 0
  ```

---

### 3️⃣ `Output_input_Stream.cpp`

* **Description:**
  Simple file write and read program using C++ file streams.

* **Highlights:**

  * Writes fixed strings to `example1.txt`.
  * Reads back the contents and prints to console.
  * Handles file open errors gracefully.

---

## 💡 Notes

* Make sure you have **C++17 or later** for `if constexpr` support in `Exception_Advanced.cpp`.

---

Ref: 

* https://www.learnqt.guide/modern-cpp-constexpr
