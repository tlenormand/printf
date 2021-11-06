#include "main.h"

/**
 * _get_octal - get the unsigned integer from _printf %o
 * then convert into octal
 * @args: argument corresponding to %o
 */

void _get_octal(va_list args)
{
	_print_octal(va_arg(args, unsigned int));
}
