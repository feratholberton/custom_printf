#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void handle_percent(int *);
void handle_char(va_list, int *);
void handle_string(va_list, int *);
void handle_unknow(int *);

#endif
