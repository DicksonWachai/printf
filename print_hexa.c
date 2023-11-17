#include <stdio.h>
#include "main.h"
/**
 * print_hexa - converts to hexadecimal
 * @n: number to be converted
 *
 * @uppercase: to handle 'X'
 *
 * Return: the count
 */
int print_hexa(unsigned int n, int uppercase)
{
	int i = 0;
	int j, temp, count;
	char hexaNum[100];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			hexaNum[i] = temp + '0';
		}
		else
		{
			if (uppercase)
			{
				hexaNum[i] = temp - 10 + 'A';
			}
			else
			{
				hexaNum[i] = temp - 10 + 'a';
			}
		}
		n = n / 16;
		i++;
	}
	j = i - 1;
	count = 0;
	while (j >= 0)
	{
		_putchar(hexaNum[j]);
		count++;
		j--;
	}
	return (count);
}
