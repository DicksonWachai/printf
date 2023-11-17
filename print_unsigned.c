#include <stdio.h>
#include "main.h"
/**
 * print_unsigned -prints unsigned int
 *
 * @n: unsigned int to be printed
 *
 * Return: the count
 */
int print_unsigned(unsigned int n)
{
	unsigned int num = n;
	unsigned int temp  = 0;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		temp = temp * 10 + num % 10;
		num /= 10;
	}
	while (temp != 0)
	{
		_putchar((temp % 10) + '0');
		temp /= 10;
		count++;
	}
	return (count);
}
