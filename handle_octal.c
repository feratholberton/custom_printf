#include "main.h"

void handle_octal(va_list args, int *char_count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	char *p;

	to_base_string(num, buffer, 8, 0);

	for (p = buffer; *p != '\0'; p++)
	{
		write(1, p, 1);
		(*char_count)++;
	}
}
