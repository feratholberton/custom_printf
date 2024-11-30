#include "main.h"

void handle_unknow(int *char_count)
{
	write(1, "%", 1);
	write(1, &char_count, 1);
	(*char_count) += 2;

}
