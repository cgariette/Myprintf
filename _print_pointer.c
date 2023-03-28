#include "main.h"
/**
 * _print_pointer - prints a pointer
 * @ptr: pointer to print
 *
 * Return: number of characters printed
 */
int _print_pointer(void *ptr)
{
    unsigned long int ptr_value = (unsigned long int) ptr;

    /* handle null pointer */
    if (ptr_value == 0)
    {
        return _printstr("(nil)", 0, -1);
    }

    _putchar('0');
    _putchar('x');

    /* print pointer value in hexadecimal */
    _print_hex(ptr_value, 1);

    /* return total number of characters printed */
    return 2 + sizeof(void *) * 2;
}
