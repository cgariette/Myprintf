#include "main.h"
/**
 * _unumlen - returns the number of digits in an unsigned integer
 * @n: the unsigned integer to count digits of
 *
 * Return: the number of digits in n
 */
int _unumlen(unsigned int n)
{
    int len = 1;

    while (n >= 10)
    {
        len++;
        n /= 10;
    }

    return len;
}
