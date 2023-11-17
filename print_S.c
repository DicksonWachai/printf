#include "main.h"
#include <stdio.h>
/**
 * hex_print - prints char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
static int hex_print(char c)
{
	int count = 0;
	unsigned char d[2];

	d[0] = (c >> 4) & 0xF;
	d[1] = c & 0xF;
	while (count < 2)
	{
		if (d[count] >= 10)
		{
			_putchar('A' + (d[count] - 10));
		}
		else
		{
			_putchar('0' + d[count]);
		}
		count++;
	}
	return (count);
}
/**
 * print_S - custom conversion specifier S
 *
 * @str: string to be printed
 *
 * Return: the count
 */
int print_S(const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			if (*str < 16)
			{
				_putchar('0');
				count++;
			}
			count += 2;
			count += hex_print(*str);
		}
		str++;
	}
	return (count);
}
