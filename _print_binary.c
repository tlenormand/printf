#include "main.h"
#include <stdio.h>

/**
 * _print_binary - convert integer to binary and print it
 * @b: integer convert and print
 * Return: lenght of character printed
 */

int _print_binary(unsigned int b)
{
	int length = 0;

	if (b)
	{
		length++;
		_print_binary(b / 2);
		_putchar(b % 2 + '0');
	}

	return (length);
}
