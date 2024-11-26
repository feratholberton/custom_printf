#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format)
{
	if (format == NULL)
	{
		printf("The input was null\n");
		return (-1);
	}

	return 1;
}
