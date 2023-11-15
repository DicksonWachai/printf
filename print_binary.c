#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary output
 * @b: number to be converted to binary
 *
 * Return: Binary number
 */
int print_binary(unsigned int b)
{
	unsigned int binaryNum[32];
	int i = 0;
	int j, count;

	while (b > 0)
	{
		binaryNum[i++] = b % 2;
		b /= 2;
	}
	j = i - 1;
	count = 0;

	while (j >= 0)
	{
		_putchar('0' + binaryNum[j]);
		count++;
		j--;
	}
	return (count);
}
