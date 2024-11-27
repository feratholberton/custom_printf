#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: The format string
 *
 * Return: Number of characters printed, or -1 on error
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	const char *p;

	if (format == NULL)
		return -1;

	for (p = format; *p != '\0'; p++)
	{
		char_count++;
	}

	return char_count;
}
