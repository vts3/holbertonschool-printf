#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - print type and print function
 * @c: print type
 * @f: print function
 */
typedef struct print
{
	char *c;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_option(const char *format))(va_list);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_binary(va_list b);
=======
#include <sring.h>
#include <stdlib.h>

int _printf(const char *format, ...);

typedef struct data
{
  char *type;
  int (*f)(va_list ptr);
}
data;
>>>>>>> ae6d0755554d921cf798896ef26acd61c5c400ea

#endif
