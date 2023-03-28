#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: string containing format specifier
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{

	va_list arg;
	int printed_chars = 0;
	int flags,width, precision;
	/*char length*/

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			/*handle flags */
			/*int flags;*/
			flags = handle_flags(&format);

			/* handle width */
			/*int width;*/
			width = handle_width(&format, arg);

			/* handle precision */
			/*int precision;*/

			precision = handle_precision(&format, arg);

			/* handle length modifier */
			/*length = handle_length(&format);*/

			/* handle conversion specifier */
			switch (*format)
			{
				case 'd':
				case 'i':
					printed_chars += _printint(va_arg(arg, int), flags, width, precision);
					break;

				case 'u':
					printed_chars += _printuint(va_arg(arg, unsigned int), flags, width, precision);
					break;
				case 'o':
					printed_chars += _printoct(va_arg(arg, unsigned int), flags, width, precision);
					break;
				case 'x':
					printed_chars += _printhex(va_arg(arg, unsigned int), 0, flags, width, precision);
                    break;

                case 'X':
                    printed_chars += _printhex(va_arg(arg, unsigned int), 1, flags, width, precision);
                    break;

                case 's':
                    printed_chars += _printstr(va_arg(arg, char *), width, precision);
                    break;

                case 'c':
                    printed_chars += _putchar(va_arg(arg, int));
                    break;
		    
		case 'r':
		  printed_chars += _printrev(va_arg(arg, char *));
		  break;
	        case 'b':
		  printed_chars += handle_b(&format, arg);
		  break;
		case 'S':
                    printed_chars += _printstr_nonprint(va_arg(arg, char *), width, precision);
                    break;
	        case 'p':
		  printed_chars += _print_pointer(va_arg(arg, void *));
		  break;



                case '%':
                    printed_chars += _putchar('%');
                    break;

                default:
                    _putchar('%');
                    if (*format != '\0')
                        printed_chars++;
                    break;
            }

            if (*format != '\0')
                format++;
        }
        else
        {
            printed_chars += _putchar(*format);
            format++;
        }
    }

    va_end(arg);

    return (printed_chars);
}
