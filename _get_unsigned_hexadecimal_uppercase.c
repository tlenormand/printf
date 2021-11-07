#include "main.h"

/**
 * _get_unsigned_hexadecimal_uppercase - get the hexadecimal from _printf %X
 * @args: argument corresponding to %d
 */

void _get_unsigned_hexadecimal_uppercase(va_list args)
{
	_print_unsigned_hexadecimal_uppercase(va_arg(args, unsigned int));
}
