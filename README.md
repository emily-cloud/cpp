# C++ in 42 Berlin

## Introduction
C++ is a powerful and versatile programming language that builds upon the foundation of C while introducing object-oriented programming (OOP), stronger type safety, and various modern features. At **42 Berlin**, the C++ modules provide a structured way to learn the language, from basic syntax to advanced concepts like templates, polymorphism, and memory management.

## Structure of C++ Modules
The C++ curriculum at **42 Berlin** is divided into multiple modules, each progressively increasing in complexity. Here’s a general overview of what each module covers:

### **Module 00: Basics of C++**
- Setting up a C++ environment
- Basic syntax, data types, and I/O operations
- Understanding classes and member functions
- The concept of Orthodox Canonical Form (OCF)

### **Module 01: Memory and Dynamic Allocation**
- Introduction to heap memory management
- Using `new` and `delete`
- Understanding references and pointers
- The concept of zombie objects and preventing memory leaks

### **Module 02: Ad-hoc Polymorphism and Operator Overloading**
- Function overloading
- Operator overloading
- The importance of `const` correctness

### **Module 03: Inheritance and Derived Classes**
- Introduction to inheritance
- Base and derived classes
- Virtual functions and function overriding
- Abstract classes and pure virtual functions

### **Module 04: Subtype Polymorphism**
- Understanding runtime polymorphism
- Virtual tables (vtable) and virtual pointers (vptr)
- `dynamic_cast` and type identification
- Handling exceptions and error management

### **Module 05: Files and Streams**
- Working with file streams
- Input/output file handling
- String streams (`std::stringstream`)

### **Module 06: C++ Templates**
- Function templates and class templates
- Template specialization and non-type parameters

### **Module 07: STL (Standard Template Library)**
- Introduction to STL containers (`vector`, `list`, `map`, etc.)
- Iterators and algorithms
- Understanding the advantages of STL

### **Module 08 & 09: Advanced Topics**
- Multithreading and concurrency
- Smart pointers (`unique_ptr`, `shared_ptr`, `weak_ptr`)
- Understanding RAII (Resource Acquisition Is Initialization)

## Key Rules and Constraints
- **No use of STL containers or algorithms before Module 08 & 09.**
- **Code must be compiled with**
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98
  ```
- **Follow good coding practices:** Use proper encapsulation, avoid memory leaks, and adhere to the C++ style guide.

## Tips for Success
- **Understand memory management:** C++ gives fine control over memory, making it essential to properly allocate and deallocate memory.
- **Practice object-oriented design:** Modular and reusable code will make complex projects easier to manage.
- **Debug effectively:** Learn to use `gdb` or `lldb` for debugging your programs.
- **Ask for peer reviews:** Code reviews help improve understanding and catch hidden issues.

## Conclusion
C++ at 42 Berlin is designed to help you develop strong problem-solving skills while learning an industry-relevant language. By progressing through these modules, you will gain a deep understanding of both the fundamentals and the advanced capabilities of C++. 🚀

