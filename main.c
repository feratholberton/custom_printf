#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	printf("Chars in Format String = %d\n", _printf(0));
	printf("Chars in Format String = %d\n", _printf(""));
	printf("Chars in Format String = %d\n", _printf("Nill"));
	printf("%s%s", "Chars in here:   ", "   more text..\n");
	return (0);
}
