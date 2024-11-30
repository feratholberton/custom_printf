#include "main.h"

void handle_char(va_list args, int *char_count)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	(*char_count)++;
}
