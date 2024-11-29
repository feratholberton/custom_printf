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

	/* Start iteration over format string until it finds the null terminator*/
	for (p = format; *p != '\0'; p++)
	{
		/* Checks for % sing | a.k.a. specifier */
		if (*p == '%')
		{
			/* Move pointer to next position */
			p++;

			/* Handle literal % sing */
			if (*p == '%')
			{
				write(1, "%", 1);
				char_count++;
			}
			/* Handle unknow specifier */
			else
			{
				write(1, "%", 1);
				write(1, p, 1);
				char_count += 2;
			}
		}
		else
		{
			write(1, p, 1);
			char_count++;
		}
	}

	return char_count;
}
