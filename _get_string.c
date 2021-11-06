#include "main.h"

/**
 * _get_string - get the string from _printf %s
 * @args: argument corresponding to %s
 */

void _get_string(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str)
		_putchar(*str++);
}
