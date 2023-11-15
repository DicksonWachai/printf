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
					count += print_decimal(va_arg(args, int));
					break;
				case 'i':
					count += print_integer(va_arg(args, int));
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
