#include "main.h"

/**
 * handle_specifier - Processes a format specifier
 * @specifier: The format specifier
 * @args: The variable argument list
 *
 * Return: Number of characters printed, or -1 on error
 */
int handle_specifier(char specifier, va_list args) {
	int char_count = 0;
	char c;
	char *str;
	int count;
	
	switch (specifier)
	{
		case 'c': { 
			/* Character */
			c = (char)va_arg(args, int);
			if (write_char(c) == -1) 
			{
				return -1;
			}
            char_count++;
            break;
        }
        case 's': { 
			  /* String */
            str = va_arg(args, char *);
            if (str == NULL) {
                str = "(null)";
            }
            count = write_string(str);
            if (count == -1) {
                return -1;
            }
            char_count += count;
            break;
        }
        case '%': { 
			  /* Literal percent */
            if (write_char('%') == -1) {
                return -1;
            }
            char_count++;
            break;
        }
        default: { 
			 /* Invalid specifier */
            if (write_char('%') == -1 || write_char(specifier) == -1) {
                return -1;
            }
            char_count += 2;
            break;
        }
    }

    return char_count;
}
