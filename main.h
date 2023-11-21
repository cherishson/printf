#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int put_string(char *str);
int print_format(char specifier, va_list args);


#endif
