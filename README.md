# SMIT C++ Workshop 2026 

Comprehensive notes, code snippets, and hands-on exercises from Day 1 of the C++ Foundation Workshop conducted by **Recursion Club, SMIT**.

---

## 📌 Workshop Overview

This workshop introduces foundational programming concepts using C++, starting from basic syntax and program anatomy to flow control, functions, and memory management using pointers.

### Key Highlights
* **Origins & Purpose:** Created by Bjarne Stroustrup (originally *C with Classes*, 1979; renamed to *C++* in 1983) to combine C's speed and low-level resource control with object-oriented programming, reusability, and abstraction.
* **Modern Applications:** High-performance game engines (Unreal Engine), systems software and operating system infrastructure, and competitive programming.

---

## 📚 Topics Covered

### 1. Anatomy of a C++ Program
* Preprocessor directives (`#include <iostream>`)
* Standard namespace (`using namespace std;`)
* Entry point (`int main()`) and return codes (`return 0;`)
* Input/output stream operations (`cin`, `cout`, `endl`)

### 2. Variables & Data Types
* Primitive types: `int`, `float`, `double`, `char`, `bool`, `long long`
* Variable naming conventions, casing rules, and keywords
* ASCII character mappings and conversions

### 3. Operators & Precedence
* Arithmetic: `+`, `-`, `*`, `/`, `%`, increment (`++`), decrement (`--`)
* Precedence rules: Parentheses `()` > `*`, `/`, `%` > `+`, `-`
* Comparison & Logical operators: `==`, `!=`, `<`, `>`, `<=`, `>=`, `&&`, `||`, `!`

### 4. Control Flow & Decision Making
* Conditional statements: `if`, `if-else`, `else-if` ladders, nested `if`
* Multi-way branching with `switch` statements and `break`

### 5. Loops & Iteration
* Counter-controlled loops: `for`
* Condition-based loops: `while` and exit-controlled `do-while`
* Jump statements: `break` and `continue`
* Nested loops for 2D patterns (rectangles, triangles, square grids)

### 6. Functions & Modular Code
* Function anatomy: return type, parameter lists, pass-by-value
* Function overloading (same identifier with differing parameter signatures)

### 7. Pointers & Memory Basics
* Address-of operator (`&`) vs. dereference operator (`*`)
* Inspecting and modifying variable memory through pointers
* Passing pointers into functions for reference modification

---

## 💡 Practice Problems & Exercises

- [ ] **Basic Calculations:** Simple interest calculator ($SI = \frac{P \times R \times T}{100}$) and area of a circle.
- [ ] **Conditionals:** Number sign checker (positive/negative/zero), leap year validator, voting eligibility, and menu-driven arithmetic calculator using `switch`.
- [ ] **Loops & Patterns:** Multiplication tables, sum of first $N$ natural numbers, and star/number pattern printing via nested loops.
- [ ] **Functions & Pointers:**
  - Function returning the square of a number.
  - Function finding the maximum of two numbers.
  - Modifying and doubling integer values in-place via pointer parameters.

---

## 🛠️ How to Compile & Run

Ensure you have a C++ compiler installed (`g++` or `clang++`).

```bash
# Compile any source file
g++ -std=c++17 main.cpp -o main

# Run the compiled binary
./main
