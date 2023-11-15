#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_decimal - print a decimal (base 10) number
 * @d: the decimal number
 *
 * Return: the count
 */
int print_decimal(int d, ...)
{
	int count = 0;
	int num, divisor, digit;
	va_list args;

	va_start(args, d);
	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	else if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		divisor = 1;
		while (num / divisor > 9)
			divisor *= 10;
		while (divisor != 0)
		{
			digit = num / divisor;
			_putchar('0' + digit);
			count++;
			num %= divisor;
			divisor /= 10;
		}
	}
	va_end(args);
	return (count);
}
