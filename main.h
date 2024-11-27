#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_specifier(char specifier, va_list args);
int write_char(char c);
int write_string(const char *str);

#endif