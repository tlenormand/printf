#include "main.h"

/**
 * _get_unsigned_decimal_integer - get the unsigned integer from _printf %u
 * @args: argument corresponding to %u
 */

void _get_unsigned_decimal_integer(va_list args)
{
	_print_unsigned_decimal_integer(va_arg(args, unsigned int));
}
