#include "main.h"

/**
 * _print_unsigned_hexadecimal_uppercase - print unsigned hexadecimal given
 * @X: unsigned integer to print in uppercase
 */

void _print_unsigned_hexadecimal_uppercase(unsigned int X)
{
	if (X)
	{
		_print_unsigned_hexadecimal_uppercase(X / 16);
		if (X % 16 < 10)
			_putchar('0' + X % 16);
		else
			_putchar('7' + X % 16);
	}
}
