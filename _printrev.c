#include "main.h"
/**
 * _printrev - prints a string in reverse order
 * @str: string to print in reverse
 *
 * Return: number of characters printed
 */
int _printrev(char *str)
{
  int printed_chars = 0, i, len;

    if (str == NULL)
        str = "(null)";

    /* Get the length of the string */
    len = 0;
    while (str[len] != '\0')
        len++;

    /* Print the string in reverse order */
    for (i = len - 1; i >= 0; i--)
        printed_chars += _putchar(str[i]);

    return (printed_chars);
}
