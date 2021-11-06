#include "main.h"

/**
 * _get_integer - get the integer from _printf %d
 * @args: argument corresponding to %d
 */

void _get_integer(va_list args)
{
	_print_integer(va_arg(args, int));
}
