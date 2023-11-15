#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - products output according to format
 * @format: returns the format
 *
 *
 * Return: The output of the format
 */
int print_c(char c, ...)
{
	va_list args;

	va_start(args, c);

	char ch = va_arg(args, int);

	_putchar(ch);

	va_end(args);

	return (1)
}
int print_s(char *s, ...)
{
	int count = 0;

	va_list args;

	va_start(args, *s);
	const char *str = s;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	va_end(args);
	return (count);
}
int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int printed_chars = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++; // Move to the next character after %

            // Handle the conversion specifiers
            switch (*format) {
                case 'c':
                    printed_chars += print_c(va_arg(args, int));
                    break;
                case 's':
                    printed_chars += print_s(va_arg(args, const char *));
                    break;
                case '%':
                    _putchar('%');
                    printed_chars++;
                    break;
                default:
                    _putchar('%'); // Print the % character if not a valid specifier
                    _putchar(*format);
                    printed_chars += 2;
                    break;
            }
        } else {
            _putchar(*format);
            printed_chars++;
        }
        format++; // Move to the next character in the format string
    }

    va_end(args);
    return printed_chars;
}
