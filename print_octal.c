#include <stdio.h>
#include "main.h"
/**
 * print_octal - handles octal conversion
 * @n: integer to be converted
 *
 * Return: the count
 */
int print_octal(unsigned int n)
{
	unsigned int octalNum[100];
	int i = 0;
	int j, count;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	j = i - 1;
	count = 0;

	while (j >= 0)
	{
		_putchar('0' + octalNum[j]);
		count++;
		j--;
	}
	return (count);
}
