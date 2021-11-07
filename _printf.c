#include "main.h"
#include <stdio.h>

/**
 * _printf - function that prints anything
 * @format: format of the string to print
 * Return: print string
 */

int _printf(const char * const format, ...)
{
	search_type_t format_of_char[] = {
		{"c", _get_char},
		{"s", _get_string},
		{"d", _get_integer},
		{"i", _get_integer},
		{"b", _get_binary},
		{"%%", _get_percent},
		{"o", _get_octal},
		{"u", _get_unsigned_decimal_integer},
		{"x", _get_unsigned_hexadecimal_lowercase},
		{"X", _get_unsigned_hexadecimal_uppercase},
		{NULL, NULL}
	};
	int index1 = 0, index2 = 0;
	va_list args;

	va_start(args, format);

	while (format && format[index1])
	{
		if (format[index1] == '%')
		{
			/* check if double % -> print single %*/
			if (format[index1 + 1] == '%')
				_putchar(37), index1++;
			else
			{
				index1++;
				while (format_of_char[index2].type)
				{
					if (format[index1] == format_of_char[index2].type[0])
					{
						format_of_char[index2].f(args);
					}
					index2++;
				}
			}
		}
		else
			_putchar(format[index1]);
		index1++;
		index2 = 0;
	}
	va_end(args);
	return (0);
}
