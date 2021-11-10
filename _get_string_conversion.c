#include "main.h"

/**
 * _get_string_conversion - get the string from _printf %S
 * then print the string
 * @args: argument corresponding to %S
 * Return: lenght of character printed
 */

int _get_string_conversion(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == 0)
		s = "(null)";

	return (_print_string_conversion(s));
}
