#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: The format string
 *
 * Return: Number of characters printed, or -1 on error
 */
int _printf(const char *format, ...) {
    int char_count = 0;
    const char *p;
    int spec_count;

    va_list args;
    va_start(args, format);

    if (format == NULL) {
        return -1;
    }

	for (p = format; *p != '\0'; p++) {
		/* find specifier */
		if (*p == '%') {
			p++;
            if (*p == '\0') {
                va_end(args);
                return -1;
            }
            spec_count = handle_specifier(*p, args);
            if (spec_count == -1) {
                va_end(args);
                return -1;
            }
            char_count += spec_count;
        } 
		/* Regular character */
		else 
		{
            if (write_char(*p) == -1) {
                va_end(args);
                return -1;
            }
            char_count++;
        }
    }

    va_end(args);
    return char_count;
}

