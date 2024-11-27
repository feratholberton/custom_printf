#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int chars;
	_printf(0);
	_printf("");
	_printf("Nill\n");

	chars = _printf("Nill\n");
	printf("Chars in format string: %d\n", chars);
	return (0);
}
