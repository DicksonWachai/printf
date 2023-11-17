#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints output format
 * @format: the format to be printed
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	const char *str;

	va_list args;

	va_start(args, format);

	while (*format != '\0' && format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd':
				case 'i':
					count += print_number(va_arg(args, int));
					break;
				case 'b':
					count += print_binary(va_arg(args, unsigned int));
					break;
				case 'u':
					count += print_unsigned(va_arg(args, unsigned int));
					break;
				case 'o':
					count += print_octal(va_arg(args, unsigned int));
					break;
				case 'x':
					count += print_hexa(va_arg(args, unsigned int), 0);
					break;
				case 'X':
					count += print_hexa(va_arg(args, unsigned int), 1);
					break;
				case 'S':
					count += print_S(va_arg(args, char *);
							break;
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
