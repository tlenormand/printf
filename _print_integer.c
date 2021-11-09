#include "main.h"
#include <stdio.h>

/**
 * _print_integer - print integer given
 * @d: integer to print
 * Return: lenght of character printed
 */

int _print_integer(int d)
{
	int lenght = 0;
	int size = 1;
	int cpt = d;

	while (cpt > 9 || cpt < -9)
	{
		cpt = cpt / 10;
		size *= 10;
	}
	if (d < 0)
		_putchar('-'), lenght++;
	while (size != 0)
	{
		if (d > 0)
			_putchar(((d / size) % 10) + '0'), lenght++;
		else
			_putchar((((d / size) % 10) * -1) + '0'), lenght++;
		size /= 10;
	}

	return (lenght);
}
