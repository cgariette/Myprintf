#include "main.h"
/**
 * _numlen - computes the number of digits in an integer
 * @n: the integer to compute the length of
 *
 * Return: the number of digits in n
 */
int _numlen(int n)
{
    int len = 0;

    do {
        len++;
        n /= 10;
    } while (n != 0);

    return len;
}
