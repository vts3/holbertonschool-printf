#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <sring.h>
#include <stdlib.h>

int _printf(const char *format, ...);

typedef struct data
{
  char *type;
  int (*f)(va_list ptr);
}
data;

#endif
