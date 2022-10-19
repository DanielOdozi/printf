> # 0x11. C - printf
---
![readme](https://img.shields.io/badge/readme-OK-green.svg?colorB=00C106)
---
> ## Authorized functions and macros
* `write (man 2 write)`
* `malloc (man 3 malloc)`
* `free (man 3 free)`
* `va_start (man 3 va_start)`
* `va_end (man 3 va_end)`
* `va_copy (man 3 va_copy)`
* `va_arg (man 3 va_arg)`
---
> ### Introduction
Project in which the operation of the printf `(_printf)` is simulated, which receives `string`, `single char`, `integer`, `decimals`, and the character percentage `(%)`
---
> ### Documentation
To use this function that simulates the printf, you must clone the repository `[printf](https://github.com/Danny111111111/printf)` to the repository where you are working, and you must include the contents of the folder holberton.h in your folder.h
---
> ### Extra information

### What’s Included?
|file|description|
|----|-----------|
|  `_printf.c`  | simulates original printf |
|  `_putchar.c` | simulates original putchar |
|  `_printf_function.c`  | contains functions for the printf |
| `main.h` | contains prototypes and libraries|
---
> ### Compilation
Your code will be compiled this way:
`gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c`
* As a consequence, be careful not to push any c file containing a `main` function in the root directory of * * your project (you could have a test folder containing all your `tests` files including `main` functions)
* Our main files will include your main header file (`main.h`): `#include main.h`
* You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`.
---
### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
function that produces output according to a format.
* Prototype: `int _printf(const char *format, ...)`;
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* `format` is a character string. The format string is composed of zero or more directives. See man 3 `printf`
* for more detail. You need to handle the following conversion specifiers:
  * `c`
  * `s`
  * `%`
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
### 1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

* `d`
* `i`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
### 2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.
Our Work flow
1- Discuss the problem
2- Whiteboard
3- pseudocode
4- flowchart
5- individual attempts
6- peer review and corrections
7- individual attempts
8- merge commits and push
9- Move to the next problem-
10-start coding
