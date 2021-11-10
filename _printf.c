#include "main.h"
#include <stdio.h>

/**
 * search_format_of_char - *function check if format exist, return the function
 * @format: charactere to check
 * Return: lenght of charactere printed or function if find
 */

int (*search_format_of_char(const char *format))(va_list)
{
	search_type_t format_of_char[] = {
		{"c", _get_char},
		{"s", _get_string},
		{"d", _get_integer},
		{"i", _get_integer},
		{"b", _get_binary},
		{"%", _get_percent},
		{"o", _get_octal},
		{"u", _get_unsigned_decimal_integer},
		{"x", _get_unsigned_hexadecimal_lowercase},
		{"X", _get_unsigned_hexadecimal_uppercase},
		{"S", _get_string_conversion},
		{"p", _get_pointer},
		{"r", _get_reverse},
		{NULL, NULL}
	};
	int i = 0;

	for (; format_of_char[i].type != NULL; i++)
		if (format_of_char[i].type[0] == *format)
			return (format_of_char[i].f);

	return (NULL);
}

/**
 * _printf - function that prints anything
 * @format: format of the string to print
 * Return: print string
 */

int _printf(const char * const format, ...)
{
	int i = 0, lenght = 0;
	int (*pointed_function)(va_list);
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar(37), i++, lenght++;
			else if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else
			{
				i++;
				pointed_function = search_format_of_char(format + i);
				if (pointed_function != NULL)
					lenght += pointed_function(args);
				else
					_putchar('%'), _putchar(format[i]), lenght += 2;
			}
		}
		else
			_putchar(format[i]), lenght++;
	}
	va_end(args);
	return (lenght);
}
