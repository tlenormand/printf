#include "main.h"
#include <stdio.h>

/**
 * search_format_of_char - *function check if s exist and return the function
 * @s: charactere to check
 * Return: function associated, 1 if not
 */

void (*search_format_of_char(char s))(va_list)
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
		/*{"+", },
		{"#", },
		{" ", },
		{"0", },
		{"-", },
		{"r", },
		{"R", },*/
		{NULL, NULL}
	};
	int i = 0;

	while (format_of_char[i].type != NULL)
	{
		if (format_of_char[i].type[0] == s)
		{
			return (format_of_char[i].f);
		}
		i++;
	}
	_putchar('%');
	_putchar(s);

	return (0);
}

/**
 * _printf - function that prints anything
 * @format: format of the string to print
 * Return: print string
 */

int _printf(const char * const format, ...)
{
	int index1 = 0;
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
				search_format_of_char(format[index1])(args);
			}
		}
		else
			_putchar(format[index1]);
		index1++;
	}
	va_end(args);

	return (0);
}
