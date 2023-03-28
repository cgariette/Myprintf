#include "main.h"
/**
 * handle_precision - handles precision for a conversion specifier
 * @format: pointer to format string
 * @arg: va_list of arguments
 *
 * Return: the precision value, or -1 if no precision was specified
 */
int handle_precision(const char **format, va_list arg)
{
    int precision = -1;

    if (**format == '.')
    {
        *format += 1;
        if (**format == '*')
        {
            *format += 1;
            precision = va_arg(arg, int);
        }
        else
        {
            precision = 0;
            while (**format >= '0' && **format <= '9')
            {
                precision = precision * 10 + (**format - '0');
                *format += 1;
            }
        }
    }

    return precision;
}
