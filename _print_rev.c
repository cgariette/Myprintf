#include "main.h"
/**
 * _print_rev - prints a string in reverse
 * @str: string to be printed in reverse
 *
 * Return: number of characters printed
 */
int _print_rev(char *str)
{
    int len = 0, i;

    /* calculate length of string */
    while (str[len] != '\0')
        len++;

    /* print string in reverse */
    for (i = len - 1; i >= 0; i--)
        _putchar(str[i]);

    /* return number of characters printed */
    return len;
}
