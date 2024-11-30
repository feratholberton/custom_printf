#include "main.h"

/**
 * handle_unsigned - Handles %u specifier in _printf
 * @args: The va_list containing the unsigned integer argument
 * @char_count: Pointer to the character count
 */
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

