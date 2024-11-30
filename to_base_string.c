#include "main.h"

void to_base_string(unsigned int num, char *buffer, int base, int uppercase)
{
	char digits[] = "0123456789abcdef";
	char upper_digits[] = "0123456789ABCDEF";
	char *chars = uppercase ? upper_digits : digits;

	int i = 0;

	if (num == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return;
	}

	while (num > 0)
	{
		buffer[i++] = chars[num % base];
		num /= base;
	}

	buffer[i] = '\0';
	reverse_string(buffer);
}
