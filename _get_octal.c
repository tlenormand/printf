#include "main.h"

/**
 * _get_octal - get the unsigned integer from _printf %o
 * then convert into octal
 * @args: argument corresponding to %o
 * Return: lenght of character printed
 */

int _get_octal(va_list args)
{
	unsigned int o = va_arg(args, unsigned int);

	if (o != 0)
		return (_print_octal(o));
	else
		_putchar('0');

	return (1);
}
