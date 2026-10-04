# CLI Calculator in C

A lightweight, terminal-based calculator written in C to demonstrate standard input handling, arithmetic execution, and division safety checks.

## Features

- Basic arithmetic operations: Addition (`+`), Subtraction (`-`), Multiplication (`*`)
- Floating-point division (`/`) with zero-division safeguards
- Modulo operations (`%`) with zero-division error handling
- Basic validation on numeric inputs

## Prerequisites

- GCC or Clang
- A standard Linux environment (tested on Ubuntu)

## Build Instructions

Compile the source file using `gcc` with standard warnings enabled:

```bash
gcc -Wall -Wextra -std=c11 -o calculator calculator.c
