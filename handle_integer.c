#include "main.h"

void handle_integer(va_list args, int *char_count)
{
	int num = va_arg(args, int);
	char buffer[12];
	char *p;

	int_to_string(num, buffer);

	for (p = buffer; *p != '\0'; p++)
	{
		write(1, p, 1);
		(*char_count)++;
	}
}
