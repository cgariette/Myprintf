#include "main.h"

/**
 * _printud - prints an unsigned decimal integer
 * @n: integer to print
 * @base: base to use for conversion (not used in this implementation)
 * @precision: number of digits to print after decimal
 */
void _printud(unsigned int n, int base, int precision)
{
    if (n / 10)
        _printud(n / 10, base, precision - 1);

    _putchar((n % 10) + '0');

    if (precision > 0)
        precision--;
    else if (precision == 0)
        _putchar('.');
}
