#include "main.h"

/**
 * _get_unsigned_decimal_integer - get the unsigned integer from _printf %u
 * @args: argument corresponding to %u
 */

void _get_unsigned_decimal_integer(va_list args)
{
	unsigned int ui = va_arg(args, int);

	_print_unsigned_decimal_integer(ui);
}
