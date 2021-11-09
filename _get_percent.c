#include "main.h"

/**
 * _get_percent - get the percent from _printf %%
 * print a %
 * @args: argument corresponding to %%
 * Return: lenght of character printed
 */

int _get_percent(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}
