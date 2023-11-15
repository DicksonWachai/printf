#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_number - print a decimal (base 10) number
 * @d: the decimal number
 *
 * Return: the count
 */
int print_number(int num)
{
	int count = 0;
	int divisor, digit;

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
	return (count);
}
