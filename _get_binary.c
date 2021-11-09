#include "main.h"

/**
 * _get_binary - get the integer from _printf %b
 * then convert into binary
 * @args: argument corresponding to %b
 * Return: lenght of character printed
 */

int _get_binary(va_list args)
{
	int lenght = 0;
	unsigned int b = va_arg(args, int);

	if (b != 0)
		_print_binary(b);
	else
		_putchar('0'), lenght++;

	return (lenght);
}
