#include "main.h"

/**
 * write_char - Writes a single character to stdout
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int write_char(char c) {
    return write(1, &c, 1);
}

/**
 * write_string - Writes a string to stdout
 * @str: The string to write
 *
 * Return: Number of characters written, or -1 on error
 */
int write_string(const char *str) {
    int char_count = 0;

    for (; *str != '\0'; str++) {
        if (write_char(*str) == -1) {
            return -1;
        }
        char_count++;
    }

    return char_count;
}

