#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
void handle_percent(int *);
void handle_char(va_list, int *);
void handle_string(va_list, int *);
void handle_integer(va_list, int *);
void handle_unsigned(va_list, int *);

void int_to_string(int, char *);
void unsigned_to_string(unsigned int, char *);
void reverse_string(char *);

#endif
