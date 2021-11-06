#include "main.h"

/**
 * _get_char - get the char from _printf %c
 * @args: argument corresponding to %c
 */

void _get_char(va_list args)
{
	_putchar(va_arg(args, int));
}
