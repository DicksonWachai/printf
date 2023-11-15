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
	int divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num *= -1;
	}
	else if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else if (num > 0 && num < 9)
	{
		_putchar('0' + num);
		count++;
	}
	else
	{
		while (num / divisor > 9)
		{
			divisor *= 10;
		}
	}
	return (count);
}
