#include "main.h"

/**
 * _get_octal - get the unsigned integer from _printf %o
 * then convert into octal
 * @args: argument corresponding to %o
 */

void _get_octal(va_list args)
{
	unsigned int o = va_arg(args, unsigned int);
	if (o != 0)
		_print_octal(o);
	else	_putchar('0');
}
