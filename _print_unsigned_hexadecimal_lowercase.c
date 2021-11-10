#include "main.h"

/**
 * _print_unsigned_hexadecimal_lowercase - print unsigned hexadecimal given
 * @x: unsigned hexadecimal to print in lowercase
 * Return: lenght of character printed
 */

int _print_unsigned_hexadecimal_lowercase(unsigned int x)
{
	int lenght = 0;

	if (x)
	{
		_print_unsigned_hexadecimal_lowercase(x / 16);
		if (x % 16 < 10)
			_putchar('0' + x % 16), lenght++;
		else
			_putchar('7' + x % 16 + 32), lenght++;
	}

	return (lenght);
}
