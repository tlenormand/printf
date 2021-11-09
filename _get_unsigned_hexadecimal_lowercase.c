#include "main.h"

/**
 * _get_unsigned_hexadecimal_lowercase - get the hexadecimal from _printf %x
 * @args: argument corresponding to %x
 * Return: lenght of character printed
 */

int _get_unsigned_hexadecimal_lowercase(va_list args)
{
	int lenght = 0;
	unsigned int x = va_arg(args, unsigned int);

	if (x != 0)
		_print_unsigned_hexadecimal_lowercase(x);
	else
		_putchar('0'), lenght++;

	return (lenght);
}
