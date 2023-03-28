#include "main.h"
/**
 * _printhex - prints an unsigned int in hexadecimal format
 * @n: unsigned int to print
 * @uppercase: whether to use uppercase letters for A-F or not
 * @flags: flags to apply ('#' for alternate form, '0' for zero padding, '-' for left alignment)
 * @width: minimum width of the field to print (padded with spaces or zeros)
 * @precision: minimum number of digits to print for precision (padded with zeros)
 *
 * Return: number of characters printed
 */
int _printhex(unsigned int n, int uppercase, int flags, int width, int precision)
{
    char buffer[32];
    int printed_chars = 0;
    char *prefix = (flags & FLAG_HASH) ? (uppercase ? "0X" : "0x") : "";
    int prefix_len = (flags & FLAG_HASH) ? 2 : 0;
    int n_digits = 0;
    int i;

    do {
        buffer[n_digits++] = (n % 16 < 10) ? (n % 16 + '0') : (n % 16 - 10 + (uppercase ? 'A' : 'a'));
        n /= 16;
    } while (n != 0);

    /* add padding for width */
    if (width > n_digits + prefix_len && !(flags & FLAG_MINUS)) {
        for (i = 0; i < width - n_digits - prefix_len; i++)
            printed_chars += _putchar(flags & FLAG_ZERO ? '0' : ' ');
    }

    /* add prefix for alternate form */
    for (i = 0; i < prefix_len; i++)
        printed_chars += _putchar(prefix[i]);

    /* add padding for precision */
    for (i = 0; i < precision - n_digits; i++)
        printed_chars += _putchar('0');

    /* print the actual digits */
    for (i = n_digits - 1; i >= 0; i--)
        printed_chars += _putchar(buffer[i]);

    /* add padding for width */
    if (width > n_digits + prefix_len && (flags & FLAG_MINUS)) {
        for (i = 0; i < width - n_digits - prefix_len; i++)
            printed_chars += _putchar(' ');
    }

    return (printed_chars);
}
