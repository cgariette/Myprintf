#include "main.h"
/**
 * _printuint - prints an unsigned integer
 * @n: integer to print
 * @flags: flags to modify format (see handle_flags)
 * @width: minimum width of output (see handle_width)
 * @precision: number of digits to print after decimal (see handle_precision)
 *
 * Return: number of characters printed
 */
int _printuint(unsigned int n, int flags, int width, int precision)
{
    int numlen = _unumlen(n);
    int prefixlen = 0;
    int printed_chars;
    char padding_char, prefix_char;
    if (flags & PLUS)
        prefixlen = 1;
    else if (flags & SPACE)
        prefixlen = 1;

    if (precision > numlen - prefixlen)
        prefixlen += precision - (numlen - prefixlen);
    else if (precision == 0 && n == 0)
        numlen = prefixlen;

    if (width > numlen)
        prefixlen += width - numlen;

    printed_chars = prefixlen + numlen;
    padding_char = (flags & ZERO) ? '0' : ' ';
    prefix_char = 0;

    if (flags & PLUS)
        prefix_char = '+';
    else if (flags & SPACE)
        prefix_char = ' ';

    /* print the prefix */
    if (prefix_char)
        _putchar(prefix_char);

    /* print any padding before the number */
    while (prefixlen > 0)
    {
        _putchar(padding_char);
        prefixlen--;
    }

    /* print the number itself */
    _printud(n, 10, precision);

    return printed_chars;
}
