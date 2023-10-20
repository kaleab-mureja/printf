#ifndef MY_H
#define MY_H
#include <stdarg.h>
#include <stddef.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _raw_print(char *string);
int _get_base(int num);
int _pow(int num, int exponent);
int _print_int(int num);
void _print_double(double num);
int toBinary(unsigned int num);
int printReverseString(char *string);
#endif
