#include "main.h"
/**
 * handle_b - handles the 'b' conversion specifier
 * @format: pointer to format string, will be updated to point to the next character after the specifier
 * @arg: va_list containing the arguments for the specifier
 *
 * Return: width of the field
 */
int handle_b(const char **format, va_list arg)
{
    int width = 0;
    unsigned int n;

    /* handle width specifier */
    if (**format == '0')
    {
        (*format)++;
        width = _atoi(*format);
    }

    /* handle argument */
    n = va_arg(arg, unsigned int);

    /* print binary */
    return (_printbin(n, width));
}
