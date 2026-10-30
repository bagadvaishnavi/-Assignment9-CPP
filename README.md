# Assignment 9: Implementation of `std::move` in C++

## Practical Details
- **Course:** SY B.Tech. – Artificial Intelligence and Machine Learning
- **Practical Number:** 9
- **Subject:** Object-Oriented Programming with C++
- **Programming Language:** C++
- **Header Files:** `<iostream>`, `<string>`, `<vector>`, `<utility>`
- **Compiler:** Dev-C++ (C++11 or later)

## Aim
To write a C++ program demonstrating `std::move` from the `<utility>` header and understand the difference between copying and moving objects.

## Problem Statement
Write a C++ program that demonstrates the use of `std::move`. The program should move a string and a vector instead of copying them and show the difference between a copy constructor and a move constructor in a class that owns dynamically allocated memory.

## Objectives
1. Understand lvalues, rvalues, and rvalue references (`&&`).
2. Understand `std::move` and the `<utility>` header.
3. Demonstrate moving strings and vectors.
4. Implement copy and move constructors.
5. Understand the state of an object after moving.

## Concepts Used

### 1. `std::move`
`std::move` is declared in the `<utility>` header. It converts an expression into an rvalue expression, allowing move operations when supported. It does not transfer resources by itself.

### 2. Copy Constructor
A copy constructor creates a separate copy of an object's data.

### 3. Move Constructor
A move constructor transfers resources from one object to another. In the `Box` class, the pointer is transferred and the original pointer is set to `nullptr`.

### 4. String and Vector
The program demonstrates moving a string and a vector using `std::move`.

## Algorithm
1. Start the program.
2. Include the required header files.
3. Create a `Box` class with a pointer, constructor, copy constructor, move constructor, display function, and destructor.
4. Read a word and a number from the user.
5. Copy the string and display both copies.
6. Move the string using `std::move` and display the results.
7. Create a vector containing five elements and move it into another vector.
8. Create a `Box` object, copy it, and then move it.
9. Display the values of the three `Box` objects.
10. Stop the program.

## Sample Input
```text
Hello
10
```

## Sample Output
```text
--- String Demonstration ---
After copy:
s1 = [Hello]
s2 = [Hello]
After move:
s1 = []
s3 = [Hello]

--- Vector Demonstration ---
v1 size = 0
v2 size = 5

--- Box Demonstration ---
Normal constructor called

Creating b2 by copying b1:
Copy constructor called

Creating b3 by moving b1:
Move constructor called

Final values:
b1 = Empty
b2 = 10
b3 = 10
```

*Note: The exact state of a moved-from string or vector is implementation-dependent. The output above shows a typical result.*

## Result
The program demonstrates `std::move` with strings and vectors and illustrates the difference between copy and move constructors using dynamically allocated memory.

## Conclusion
The practical demonstrates that `std::move` enables move operations, which can transfer resources instead of creating duplicate copies. The move constructor transfers the pointer and sets the original pointer to `nullptr`, preventing both objects from deleting the same memory.

## Author
- **Student Name:** [Vaishnavi Bagad]
- **PRN:** [202501110059]
- **Branch:** Artificial Intelligence and Machine Learning
- **Batch:** [B1]
