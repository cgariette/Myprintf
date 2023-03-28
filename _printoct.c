#include "main.h"
/**
 * _printoct - prints an unsigned integer in octal notation
 * @n: the unsigned integer to print
 * @flags: the flags to modify output behavior
 * @width: the minimum width of the printed field
 * @precision: the minimum number of digits to print
 *
 * Return: number of characters printed
 */
int _printoct(unsigned int n, int flags, int width, int precision)
{
    char buffer[50];
    int i = 0, j = 0, padding = 0, len = 0;

    /* convert to octal */
    do {
        buffer[i++] = (n % 8) + '0';
        n /= 8;
    } while (n > 0);

    /* handle precision */
    if (precision > i)
        padding = precision - i;

    /* handle width */
    if (width > (i + padding) && (flags & FLAG_ZERO) && !(flags & FLAG_MINUS))
        padding = width - i;

    len = i + padding;

    if (!(flags & FLAG_MINUS))
    {
        for (j = 0; j < (width - len); j++)
            _putchar((flags & FLAG_ZERO) ? '0' : ' ');
    }

    for (j = 0; j < padding; j++)
        _putchar('0');

    while (--i >= 0)
        _putchar(buffer[i]);

    if (flags & FLAG_MINUS)
    {
        for (j = 0; j < (width - len); j++)
            _putchar(' ');
    }

    return len;
}
