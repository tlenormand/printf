#include "main.h"

/**
 * _print_integer - print integer given
 * @d: integer to print
 * Return: lenght of character printed
 */

int _print_integer(int d)
{
	int lenght = 0;
	unsigned int i = 0;
	unsigned int number_in_n;
	unsigned int j = 1;

	if (d == 0)
	{
		_putchar('0');
		lenght++;
	}
	else
	{
		if (d < 0)
		{
			_putchar('-'), d = d * (-1);
			lenght++;
		}
		number_in_n = d;
		while (number_in_n > 0)
		{
			i++;
			number_in_n = number_in_n / 10;
		}
		while (i > 1)
		{
			j = j * 10;
			i--;
		}
		while (j > 0)
		{
			_putchar((d / j) % 10 + '0');
			lenght++;
			j = j / 10;
		}
	}
	return (lenght);
}
