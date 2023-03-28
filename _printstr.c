#include "main.h"
/**
 * _printstr - prints a string
 * @str: string to print
 * 
 * @width: minimum width of the field (if output is shorter, it will be padded with spaces)
 * @precision: maximum number of characters to print (if string is longer, it will be truncated)
 *
 * Return: number of characters printed
 */
int _printstr(char *str, int width, int precision)
{
    int printed_chars = 0, i;

    if (str == NULL)
        str = "(null)";

    /* if precision is specified and less than string length, truncate the string */
    if (precision >= 0)
    {
        for (i = 0; str[i] != '\0' && i < precision; i++)
            printed_chars += _putchar(str[i]);
    }
    else
    {
        for (i = 0; str[i] != '\0'; i++)
            printed_chars += _putchar(str[i]);
    }

    /* if width is specified and output is shorter, pad with spaces */
    while (printed_chars < width)
    {
        printed_chars += _putchar(' ');
    }

    return (printed_chars);
}
