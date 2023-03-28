#include "main.h"
/**
 * handle_width - parses the width specifier from a format string
 * @format: format string
 * @arg: argument list
 *
 * Return: width if a width specifier is found, otherwise 0
 */
int handle_width(const char **format, va_list arg)
{
    int width = 0;

    if (**format >= '0' && **format <= '9')
    {
        while (**format >= '0' && **format <= '9')
        {
            width = width * 10 + (**format - '0');
            (*format)++;
        }
    }
    else if (**format == '*')
    {
        width = va_arg(arg, int);
        (*format)++;
    }

    return (width);
}
