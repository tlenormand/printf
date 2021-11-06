#include "main.h"

/**
 * _print_octal - convert integer to octal and print it
 * @o: integer convert and print
 */

void _print_octal(unsigned int o)
{
	if (o)
	{
		_print_octal(o / 8);
		_putchar(o % 8 + '0');
	}
}
