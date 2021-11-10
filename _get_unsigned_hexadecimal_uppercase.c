#include "main.h"

/**
 * _get_unsigned_hexadecimal_uppercase - get the hexadecimal from _printf %X
 * @args: argument corresponding to %d
 * Return: lenght of character printed
 */

int _get_unsigned_hexadecimal_uppercase(va_list args)
{
	unsigned int X = va_arg(args, unsigned int);

	if (X != 0)
	{
		return (_print_unsigned_hexadecimal_uppercase(X));
	}
	else
		_putchar('0');

	return (1);
}
