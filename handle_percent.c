#include "main.h"

void handle_percent(int *char_count)
{
	write(1, "%", 1);
	(*char_count)++;
}
