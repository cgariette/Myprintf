#include "main.h"
/**
 * handle_flags - handles flag characters for printf
 * @format: pointer to format string
 *
 * Return: integer representing flags
 */
int handle_flags(const char **format)
{
    int flags = 0;
    int done = 0;
    

    while (!done)
    {
        switch (**format)
        {
            case '-':
                flags |= FLAG_MINUS;
                break;
            case '+':
                flags |= FLAG_PLUS;
                break;
            case ' ':
                flags |= FLAG_SPACE;
                break;
            case '#':
                flags |= FLAG_HASH;
                break;
            case '0':
                flags |= FLAG_ZERO;
                break;
            default:
                done = 1;
                break;
        }

        if (!done)
            (*format)++;
    }

    return flags;
}
