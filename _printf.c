#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: The format string
 *
 * Return: Number of characters printed, or -1 on error
 */

void handle_string(va_list, int *);

int _printf(const char *format, ...)
{
	int char_count = 0;
	const char *p;
	va_list args;

	if (format == NULL)
		return -1;

	va_start(args, format);

	/* Start iteration over format string until it finds the null terminator*/
	for (p = format; *p != '\0'; p++)
	{
		/* Check for % symbol | a.k.a. specifier */
		if (*p == '%')
		{
			/* Move pointer to next position */
			p++;

			/* Check for % symbol */
			if (*p == '%')
			{
				handle_percent(&char_count);
			}

			/* Check for c symbol | Character identifier */
			else if (*p == 'c')
			{
				handle_char(args, &char_count);
			}

			/* Check for s symbol | String identifier */
			else if (*p == 's')
			{
				handle_string(args, &char_count);
			}

			/* Check for unknow specifier */
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

	va_end(args);
	return char_count;
}
