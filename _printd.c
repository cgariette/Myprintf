#include "main.h"
/**
 * _printd - recursive function to print integer in decimal or binary format
 * @n: integer to print
 * @base: base to print the integer in (10 for decimal, 2 for binary, 8 for octal, 16 for hexadecimal)
 * @is_unsigned: whether the integer is unsigned or signed
 *
 * Return: void
 */
void _printd(unsigned int n, int base, int is_unsigned)
{
  int remainder;
    if (n / base)
        _printd(n / base, base, is_unsigned);
    
    remainder = n % base;
    if (remainder < 10)
        _putchar(remainder + '0');
    else
        _putchar(remainder - 10 + 'a');

    if (!is_unsigned && n == 0)
        _putchar('-');
}
