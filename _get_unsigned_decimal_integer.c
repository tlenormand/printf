#include "main.h"

/**
 * _get_unsigned_decimal_integer - get the unsigned integer from _printf %u
 * @args: argument corresponding to %u
 */

void _get_unsigned_decimal_integer(va_list args)
{
	int i = va_arg(args, int);
	unsigned int ui;

	ui = i < 0 ? -i : i;
	_print_integer(ui / 10);
}
