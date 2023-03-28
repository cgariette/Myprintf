#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(const char *s)
{
    int sign = 1;
    int result = 0;

    /* Handle leading whitespace */
    while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
        s++;

    /* Handle sign */
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }

    /* Convert string to integer */
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}
