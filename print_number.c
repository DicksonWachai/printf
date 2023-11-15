#include <stdio.h>
#include "main.h"
#include <limits.h>
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
	int digit;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num *= -1;
	}
	else if(num == INT_MIN)
	{
		_putchar('-');
		count++;
		num = INT_MAX;
		while (num > 0)
		{
			digit = num % 10;
			_putchar('0' + digit);
			count++;
			num /= 10;
		}
		_putchar('1');
		count++;
	}
	else if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar('0' + digit);
		count++;
		num %= divisor;
		divisor /= 10;
	}	
	return (count);
}
