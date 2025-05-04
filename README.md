# 42tokyo_cpp02

This repository contains exercises for the 42Tokyo C++ Module 02. The exercises focus on understanding fixed-point arithmetic, operator overloading, and other C++ features. Below is a brief description of the directory structure and its contents:

## Directory Structure

### `ex00`
- **Description**: Introduction to fixed-point numbers. Implements a `Fixed` class with basic functionality.
- **Files**:
  - `srcs/Fixed.cpp`: Implementation of the `Fixed` class.
  - `srcs/main.cpp`: Test program for the `Fixed` class.
  - `includes/Fixed.hpp`: Header file for the `Fixed` class.
  - `Makefile`: Build system for the project.

### `ex01`
- **Description**: Extends the `Fixed` class to include conversions between integers, floats, and fixed-point numbers.
- **Files**:
  - `srcs/Fixed.cpp`: Implementation of the extended `Fixed` class.
  - `srcs/main.cpp`: Test program for the extended `Fixed` class.
  - `includes/Fixed.hpp`: Header file for the `Fixed` class.
  - `Makefile`: Build system for the project.

### `ex02`
- **Description**: Adds operator overloading to the `Fixed` class, including arithmetic, comparison, and increment/decrement operators.
- **Files**:
  - `srcs/Fixed.cpp`: Implementation of the `Fixed` class with operator overloading.
  - `srcs/main.cpp`: Test program for the overloaded operators.
  - `includes/Fixed.hpp`: Header file for the `Fixed` class.
  - `Makefile`: Build system for the project.

### `ex03`
- **Description**: Implements a `Point` class and a function `bsp` to determine if a point lies inside a triangle using fixed-point arithmetic.
- **Files**:
  - `srcs/Point.cpp`: Implementation of the `Point` class.
  - `srcs/Fixed.cpp`: Implementation of the `Fixed` class.
  - `srcs/bsp.cpp`: Implementation of the `bsp` function.
  - `srcs/main.cpp`: Test program for the `Point` class and `bsp` function.
  - `includes/Point.hpp`: Header file for the `Point` class.
  - `includes/Fixed.hpp`: Header file for the `Fixed` class.
  - `Makefile`: Build system for the project.

### `.vscode`
- **Description**: Contains Visual Studio Code settings for the project.
- **Files**:
  - `settings.json`: Configures file associations for C++ development.

## How to Build
Each exercise directory contains a `Makefile`. To build the project, navigate to the respective directory and run:
```bash
make
```

To clean up object files, run:
```bash
make clean
```

To remove the executable as well, run:
```bash
make fclean
```

To rebuild the project from scratch, run:
```bash
make re
```

## License
This project is part of the 42Tokyo curriculum and is intended for educational purposes.