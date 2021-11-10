#include "main.h"

/**
 * _get_reverse - get the string from _printf %r
 * then print the reverse string
 * @args: argument corresponding to %r
 * Return: lenght of character printed
 */

int _get_reverse(va_list args)
{
	char *r = (va_arg(args, char *));
	int lenght = 0, i = 0;

	if (r == 0)
	{
		r = "(null)";
		while (*r)
			_putchar(*r++);
		return (6);
	}

	while (r[i])
		i++;

	while (i > 0)
	{
		_putchar(r[--i]);
		lenght++;
	}

	return (lenght);
}
