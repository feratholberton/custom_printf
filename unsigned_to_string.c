#include "main.h"

void unsigned_to_string(unsigned int num, char *buffer)
{
	int i = 0;

	if (num == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
		return;
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	buffer[i] = '\0';
	reverse_string(buffer);
}
