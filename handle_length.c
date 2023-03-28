#include "main.h"
/**
 * handle_length - handles the length modifier for conversion specifiers
 * @format: pointer to format specifier
 *
 * Return: the length modifier character, or '\0' if none found
 */
char handle_length(const char **format)
{
    char length = '\0';

    if (**format == 'l' || **format == 'h')
    {
        length = **format;
        (*format)++;
    }

    return (length);
}
