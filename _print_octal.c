#include "main.h"
/**
 * _print_octal - recursive function to print octal
 * @n: unsigned integer to print as octal
 *
 * Return: void
 */
void _print_octal(unsigned int n)
{
    if (n / 8)
        _print_octal(n / 8);
    _putchar(n % 8 + '0');
}
