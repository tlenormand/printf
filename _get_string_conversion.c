#include "main.h"

/**
 * _get_string_conversion - get the string from _printf %S
 * then print the string
 * @args: argument corresponding to %S
 */

void _get_string_conversion(va_list args)
{
	_print_string_conversion(va_arg(args, char *));
}
