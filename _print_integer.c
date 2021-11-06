#include "main.h"

/**
 * _print_integer - print integer given
 * @d: integer to print
 */

void _print_integer(int d)
{
	if (d < 0)
	{
		_putchar('-');
		d *= -1;
	}
	if (d / 10)
		_print_integer(d / 10);
	_putchar(d % 10 + '0');
}
