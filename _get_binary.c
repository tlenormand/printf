#include "main.h"

/**
 * _get_binary - get the integer from _printf %b
 * then convert into binary
 * @args: argument corresponding to %b
 */

void _get_binary(va_list args)
{
	_print_binary(va_arg(args, int));
}
