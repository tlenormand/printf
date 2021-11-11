#include "main.h"

/**
 * _get_string - get the string from _printf %s
 * @args: argument corresponding to %s
 * Return: lenght of character printed
 */

int _get_string(va_list args)
{
	int lenght = 0;
	char *str = va_arg(args, char *);

	if (str == 0)
		str = "(null)";

	while (*str)
		_putchar(*str++), lenght++;

	return (lenght);
}
