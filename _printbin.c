#include "main.h"
/**
 * _printbin - prints an unsigned integer in binary format
 * @n: unsigned integer to print
 * @width: minimum field width, padded with zeros if necessary
 *
 * Return: number of characters printed
 */
int _printbin(unsigned int n, int width)
{
    int count = 0;
    char binary[32];
    int i = 0;

    /* convert integer to binary string */
    while (n > 0)
    {
        binary[i++] = (n % 2) + '0';
        n /= 2;
    }
    while (i < 32)
        binary[i++] = '0';

    /* reverse binary string */
    for (i = 31; i >= 0; i--)
    {
        if (width > 0 && i >= 32 - width)
        {
            _putchar(binary[i]);
            count++;
        }
        else if (width <= 0)
        {
            _putchar(binary[i]);
            count++;
        }
    }

    return (count);
}
