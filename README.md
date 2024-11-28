# _printf - *Our custom version of the well known printf function*

## Description :

The _printf project is a custom implementation of the standard C library function printf. This function is designed to mimic the behavior of printf by formatting and printing data to the standard output based on a format string and a variable number of arguments.

The project demonstrates a deep understanding of variadic functions, memory management, and formatted output handling. It supports a variety of conversion specifiers and handles errors. This project was built during our fist year in Holberton school, and was our first group projet. 

# Features :
### The _printf function currently supports the following conversion specifiers:

| **Specifier** | **Description**                         | **Example**                | **Output**           |
|---------------|-----------------------------------------|----------------------------|----------------------|
| `%c`          | Prints a single character              | `_printf("%c", 'A');`      | `A`                 |
| `%s`          | Prints a null-terminated string        | `_printf("%s", "Hello");`  | `Hello`             |
| `%d`          | Prints a signed decimal integer        | `_printf("%d", 42);`       | `42`                |
| `%i`          | Prints a signed decimal integer        | `_printf("%i", -42);`      | `-42`               |
| `%%`          | Prints a literal `%` character         | `_printf("%%");`           | `%`                 |

The function also handles unsupported specifiers by printing % followed by the unsupported character.

# Examples :

![printfexemple1](https://github.com/user-attachments/assets/428ef778-586f-4c86-9fdd-809e2c856c09)

### Stdout will be :

![printfexemple2](https://github.com/user-attachments/assets/7c9832ac-f43b-4b42-98b6-f02de3f681ab)

# Files :

| **Filename**     | **Description**                                                                 |
|-------------------|---------------------------------------------------------------------------------|
| `main.h`         | Header file containing all function prototypes, macros, and type definitions.   |
| `_printf.c`      | Main file implementing the custom `_printf` function.                           |
| `_putchar.c`     | Custom `_putchar` function for character output.                                |
| `.gitignore`     | Specifies files to be ignored by Git (temporary files)                          |
| `man_3_printf`   | Manual page file describing the usage, functionality, and examples of `_printf`.|


# How to compile

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf

# Flowchart explaining our logic

![flowchartprintf](https://github.com/user-attachments/assets/5b427226-1fcc-40d9-926e-7de52184faf8)

# Acknowledgements

This project was developed as part of an educational program with Holberton school  to strengthen low-level programming skills. It adheres to strict constraints such as limited use of standard library functions and careful memory management.

# Authors

🌸 Clarisse Perez 🌸

Karim Habouchi 
