# cpp02 - Fixed-Point Number Implementation and Operator Overloading

This project consists of a series of exercises that focus on implementing fixed-point number arithmetic in C++. It demonstrates important C++ concepts like encapsulation, operator overloading, and proper class design.

## Project Structure

The project is divided into four progressive exercises:

### ex00 - Basic Fixed-Point Class

**Description**: Introduction to fixed-point numbers with basic class functionality.

**Files**:
- Fixed.hpp: Class definition with private fixed-point value and bit count
- Fixed.cpp: Implementation with default constructor, copy constructor, destructor, assignment operator
- main.cpp: Test program showing basic class instantiation and copying
- Makefile: Builds the `firstFixedClass` executable

**Features**:
- Basic fixed-point number representation with 8 fractional bits
- Raw bit access and manipulation
- Orthodox Canonical Form implementation (default constructor, copy constructor, destructor, assignment operator)

### ex01 - Fixed-Point Conversions

**Description**: Extends the Fixed class to handle conversions between different number formats.

**Files**:
- Fixed.hpp: Extended class definition with conversion methods
- Fixed.cpp: Implementation with integer and float constructors and conversion methods
- main.cpp: Test program demonstrating conversions
- Makefile: Builds the `secondFixedClass` executable

**Features**:
- Constructors for int and float values
- Fixed-point to integer conversion
- Fixed-point to float conversion
- Stream output operator overloading

### ex02 - Operator Overloading

**Description**: Adds comprehensive operator support to the Fixed class.

**Files**:
- Fixed.hpp: Extended with operator declarations
- Fixed.cpp: Implementation of all overloaded operators
- main.cpp: Test program demonstrating operator functionality
- Makefile: Builds the `thirdFixedClass` executable

**Features**:
- Comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`)
- Arithmetic operators (`+`, `-`, `*`, `/`)
- Increment/decrement operators (`++`, `--`) in both prefix and postfix forms
- Static min/max functions (for both non-const and const arguments)

### ex03 - Binary Space Partitioning (BSP) with Fixed-Point Arithmetic

**Description**: Uses the Fixed class to implement point representation and triangle containment checking.

**Files**:
- Fixed.hpp: Fixed-point number implementation
- `includes/Point.hpp`: 2D point representation using Fixed values
- Fixed.cpp: Fixed-point implementation
- `srcs/Point.cpp`: Point class implementation
- `srcs/bsp.cpp`: Binary Space Partitioning function to check if a point is inside a triangle
- main.cpp: Test program for the BSP functionality
- Makefile: Build system for the project

## Building and Running

Each exercise has its own Makefile. To build an exercise:

```bash
cd exXX
make
```

To run the resulting program:

```bash
./programName
```

Clean up object files:

```bash
make clean
```

Remove the executable as well:

```bash
make fclean
```

Rebuild from scratch:

```bash
make re
```

## Compilation

All code is compiled with:
- C++98 standard
- Strict warning flags (-Wall -Wextra -Werror -pedantic)
- Using clang++

## Key Concepts Demonstrated

1. **Fixed-Point Arithmetic**: Implementation of fixed-point numbers for precise decimal representation
2. **Operator Overloading**: Complete set of C++ operators implemented for a custom class
3. **Orthodox Canonical Form**: Proper implementation of constructors, destructor, and assignment operators
4. **Type Conversion**: Converting between different numeric types (int, float, fixed-point)
5. **Static Class Methods**: Implementation of utility functions that don't depend on instance state
6. **Computational Geometry**: BSP algorithm for point-in-triangle testing (ex03)

This project is part of the 42 school curriculum and demonstrates fundamental C++ concepts through practical implementations.