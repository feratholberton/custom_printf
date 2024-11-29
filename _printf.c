#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: The format string
 *
 * Return: Number of characters printed, or -1 on error
 */

void handle_percent(int *);
void handle_char(va_list, int *);

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
		/* Checks for % sing | a.k.a. specifier */
		if (*p == '%')
		{
			/* Move pointer to next position */
			p++;

			/* Handle literal % sing */
			if (*p == '%')
			{
				handle_percent(&char_count);
			}

			/* Handle c indentifier */
			else if (*p == 'c')
			{
				handle_char(args, &char_count);
			}

			/* Handle s identifier */
			else if (*p == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";

				for (; *str != '\0'; str++)
				{
					write(1, str, 1);
					char_count++;
				}
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

	va_end(args);
	return char_count;
}

void handle_percent(int *char_count)
{
	write(1, "%", 1);
	(*char_count)++;
}

void handle_char(va_list args, int *char_count)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	(*char_count)++;
}
