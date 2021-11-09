#include "main.h"

/**
 * _print_integer - print integer given
 * @d: integer to print
 * Return: lenght of character printed
 */

int _print_integer(int d)
{
	int lenght = 0;

	if (d < 0)
	{
		_putchar('-'), lenght++;
		d *= -1;
	}
	if (d / 10)
		_print_integer(d / 10);
	_putchar(d % 10 + '0'), lenght++;

	return (lenght);
}
