#include "main.h"
/**
 * _printstr_nonprint - prints a string, replacing non-printable characters
 * @str: the string to print
 * @width: minimum width of the field (if output is shorter, it will be padded with spaces)
 * @precision: maximum number of characters to print (if string is longer, it will be truncated)
 *
 * Return: number of characters printed
 */
int _printstr_nonprint(char *str, int width, int precision)
{
    int printed_chars = 0, i;

    if (str == NULL)
        str = "(null)";

    for (i = 0; str[i] != '\0' && (precision < 0 || i < precision); i++)
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            printed_chars += _putchar('\\');
            printed_chars += _putchar('x');
            printed_chars += _print_hex(str[i], 1);
        }
        else
        {
            printed_chars += _putchar(str[i]);
        }
    }

    /* if width is specified and output is shorter, pad with spaces */
    while (printed_chars < width)
    {
        printed_chars += _putchar(' ');
    }

    return printed_chars;
}
