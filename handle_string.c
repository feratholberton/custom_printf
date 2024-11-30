#include "main.h"

void handle_string(va_list args, int *char_count)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (; *str != '\0'; str++)
	{
		write(1, str, 1);
		(*char_count)++;
	}
}
