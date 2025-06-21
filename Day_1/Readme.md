Day 1 - CPP Basics: 

Variables: 

![image](https://github.com/user-attachments/assets/385e9c41-0685-4e34-9766-8793e430ac15)

* Static: Memory init only once during lifetime and persists across function calls. Memory for static variables is allocated in the data segment, not the stack.
* Static Global: Not accessible to other files in the project. 

Memory allocation types: 

* Stack is used for fast, automatic allocation of local variables and function parameters.
* Heap is used for dynamic memory allocation when the size or lifetime of data is not known at compile time.
* The data segment is a dedicated memory region for storing global and static variables, distinguishing between initialized and uninitialized data. 

Variables are typically allocated memory in stack. 

Datatypes:
* float vs double: single (4 byte) vs double precision (8 byte)
* Big variables: unsigned long long int (64 bit), unsigned __int128_t (128 bit), Big int (GMP used for cryptography)
* wchar_t provides a way to handle a wider range of characters than the standard char type, particularly useful for Unicode and other character sets requiring more than one byte for representation 
  wchar_t myWideChar = L'é'; // 'é' is a wide character (not in ASCII)
  wchar_t* myWideString = L"Hello, world!"; // Wide string literal

Extern: 
* If the varibale scope is not there (i.e if definition is not present in that place for now), use extern to search for the definition and include it in the present scope. 
![image](https://github.com/user-attachments/assets/5bab6271-7837-4e23-9172-5ed79d3634e6)

Scope: 
* Functions, Loops, and Conditional Statements Create a New Scope: Each function, loop, or conditional block introduces a new scope.
* Variables declared inside the block are local to that scope.
* Outer Scope Variables Are Accessible in Inner Scopes: Variables from an outer scope can be used inside inner scopes unless overshadowed. However, inner scope variables are not accessible outside their block.


Ref: 
* GeeksForGeeks C++
