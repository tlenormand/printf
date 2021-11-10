#include "main.h"

/**
 * _get_char - get the char from _printf %c
 * @args: argument corresponding to %c
 * Return: lenght of character printed
 */

int _get_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}
