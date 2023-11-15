#include <stdio.h>
#include "main.h"
/**
 * print_string - outputs string format
 * @str: string to be output
 *
 * Return: the string count
 */
int print_string(const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
