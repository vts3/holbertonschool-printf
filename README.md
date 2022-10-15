# project C - printf ✏️

## _printf()

### **Prototype: `int _printf(const char *format, ...);`**

### _printf.c

The _printf() function takes one argument: a string of characters to print. 
This string is made up of characters, each of which is printed exactly as it appears. 
On the other hand, we have characters that normally print as expected, but when you add a specifier, they become special. 
The format specifiers are:
FORMAT generates a specific format relative to the input of the specifier.

## Formats used

| %Character | Output |
| --- | --- |
| `c` | Print a character passed as a parameter |
| `s` | Prints a string of characters terminated with a null |
| `%` | Print a percentage sign |
| `d` | Prints a signed decimal number |
| `i` | Converts an argument to unsigned decimal notation and prints it |


## Description

This is a Holberton School project, where we created our own "Printf" and implemented it from our `main.h` library to develop different tests as if we were using the original printf from the C library.

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called `main.h`
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the `_putchar` function for this project

## Some examples

```C
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    
    /* We have one string: */
    len = _printf("Let's try to printf a simple sentence.\n");
    
     _printf("Negative:[%d]\n", -762534);
     _printf("Length:[%d, %i]\n", len, len);
     _printf("Character:[%c]\n", 'H');
     _printf("String:[%s]\n", "I am a string !");
     len = _printf("Percent:[%%]\n");
     return(0);
}
root@9e16884fb82a:/home/printf# ./a.out
Let's try to printf a simple sentence.
Negative:[-762534]
Length:[39, 39]
Character:[H]
String:[I am a string !]
Percent:[%]
```

## More files

* _putchar
 
Writes a character to stdout.

* main.h

header file containing the prototypes of each function and defines a struct.

* print_c.c

Function to print a char

* print_d.c

Function to print a decimal

* print_i.c

Function to print an integer

* print_s.c

Function to print a string

* man_3_printf

man page containing details about the usage of _printf function.

## Author
Frank Morales Cruz
