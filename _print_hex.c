#include "main.h"
/**
 * _print_hex - recursive function to print hexadecimal
 * @n: unsigned integer to print as hexadecimal
 * @capital: whether to print capital letters (1) or lowercase letters (0)
 *
 * Return: number of characters printed
 */
int _print_hex(unsigned int n, int capital)
{
    int remainder, count = 0;

    if (n / 16)
        count += _print_hex(n / 16, capital);
    remainder = n % 16;
    if (remainder < 10)
        _putchar(remainder + '0');
    else
        _putchar(remainder - 10 + (capital ? 'A' : 'a'));
    count++;
    return count;
}
