#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_int(va_arg());
void print_string(va_arg());
void print_char(va_arg());
void print_binary(va_arg());
void print_unsigned_int(va_arg());
void print_octal(va_arg());
void print_hex(va_arg());
void print_upperhex(va_arg());
void print_address(va_arg());
void print_reverse(va_arg());
void print_rot13(va_arg());

#endif /* HOLBERTON_H */
