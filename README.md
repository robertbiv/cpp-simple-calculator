# C++ Simple Calculator

A collection of simple C++ calculator programs demonstrating recursive algorithms.

## About

This repository contains two calculator programs implemented in C++ using recursive algorithms:

1. **Division Calculator** (`main.cpp`) - Calculates the quotient of two numbers using recursive subtraction
2. **Number Sequence Calculator** (`mainp2.cpp`) - Calculates the sum of numbers from 1 to n using recursion

Both programs are educational examples of recursive problem-solving in C++.

## Features

### Division Calculator
- Performs integer division using recursive subtraction
- Takes two numbers as input (dividend and divisor)
- Returns the quotient without using the division operator

### Number Sequence Calculator
- Calculates the sum of consecutive numbers from 1 to n
- Uses recursive function calls to build the sum
- Formula: sum(n) = n + (n-1) + (n-2) + ... + 1

## Requirements

- CMake 3.21 or higher
- C++ compiler with C++14 support
- g++ or any compatible C++ compiler

## Building the Project

### Using CMake (recommended)

```bash
mkdir build
cd build
cmake ..
make
```

This will build the `HW2` executable from `mainp2.cpp`.

### Manual Compilation

To compile individual programs:

```bash
# Compile division calculator
g++ -o division main.cpp

# Compile number sequence calculator
g++ -o numseq mainp2.cpp
```

## Usage

### Division Calculator

```bash
./division
```

Example:
```
Enter first number (divider): 10
Enter second number (divisor): 3
Answer is 3
```

### Number Sequence Calculator

```bash
./build/HW2
```

Example:
```
Enter a number: 5
Answer is 15
```

(Explanation: 5 + 4 + 3 + 2 + 1 = 15)

## How It Works

### Division Calculator Algorithm
The division calculator uses a recursive approach:
- **Base Case**: If the dividend is less than the divisor, return 0
- **Recursive Case**: Subtract the divisor from the dividend and recursively call the function, adding 1 each time

### Number Sequence Calculator Algorithm
The number sequence calculator also uses recursion:
- **Base Case**: If n ≤ 1, return 1
- **Recursive Case**: Return n plus the result of the function called with n-1

## Author

Robert Bennethum IV

## License

This project is available for educational purposes.
