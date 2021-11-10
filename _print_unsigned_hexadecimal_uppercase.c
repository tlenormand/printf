#include "main.h"

/**
 * _print_unsigned_hexadecimal_uppercase - print unsigned hexadecimal given
 * @X: unsigned integer to print in uppercase
 * Return: lenght of character printed
 */

int _print_unsigned_hexadecimal_uppercase(unsigned int X)
{
	int lenght = 0;

	if (X)
	{
		_print_unsigned_hexadecimal_uppercase(X / 16);
		if (X % 16 < 10)
			_putchar('0' + X % 16), lenght++;
		else
			_putchar('7' + X % 16), lenght++;
	}

	return (lenght);
}
