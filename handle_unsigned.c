#include "main.h"

void handle_unsigned(va_list args, int *char_count)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	char *p;
	unsigned_to_string(num, buffer);

	for (p = buffer; *p != '\0'; p++)
	{
		write(1, p, 1);
		(*char_count)++;
	}
}
