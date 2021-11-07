#include "main.h"

/**
 * _print_unsigned_decimal_integer - print unsigned integer given
 * @ui: unsigned integer to print
 */

void _print_unsigned_decimal_integer(unsigned int ui)
{
	if (ui / 10)
		_print_unsigned_decimal_integer(ui / 10);
	_putchar(ui % 10 + '0');
}
