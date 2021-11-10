#include "main.h"

/**
 * _get_unsigned_decimal_integer - get the unsigned integer from _printf %u
 * @args: argument corresponding to %u
 * Return: lenght of character printed
 */

int _get_unsigned_decimal_integer(va_list args)
{
	return (_print_unsigned_decimal_integer(va_arg(args, unsigned int)));
}
