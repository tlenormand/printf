#include "main.h"

/**
 * _print_octal - convert integer to octal and print it
 * @o: integer convert and print
 * Return: lenght of character printed
 */

int _print_octal(unsigned int o)
{
	int lenght = 0;

	if (o)
	{
		lenght++;
		_print_octal(o / 8);
		_putchar(o % 8 + '0');
	}

	return (lenght);
}
