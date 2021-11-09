#include "main.h"
#include <stdio.h>

/**
 * search_format_of_char - *function check if s exist and return the function
 * @s: charactere to check
 * Return: function associated, 1 if not
 */

func_t search_format_of_char(char s)
{
	search_type_t format_of_char[] = {
		{"c", &_get_char},
		{"s", &_get_string},
		{"d", &_get_integer},
		{"i", &_get_integer},
		{"b", &_get_binary},
		{"%", &_get_percent},
		{"o", &_get_octal},
		{"u", &_get_unsigned_decimal_integer},
		{"x", &_get_unsigned_hexadecimal_lowercase},
		{"X", &_get_unsigned_hexadecimal_uppercase},
		{"S", &_get_string_conversion},
		{"p", &_get_pointer},
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

	for (;format_of_char[i].type != NULL; i++)
		if (format_of_char[i].type[0] == s)
			return (format_of_char[i].f);

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
	int i = 0;
	func_t fp;
	va_list args;
		if (format == NULL)
			return (-1);
	va_start(args, format);

	for (;format && format[i];i++)
		if (format[i] == '%')
		{
			/* check if double % -> print single %*/
			if (format[i + 1] == '%')
				_putchar(37), i++;
			else
			{
				i++;
				fp =  search_format_of_char(format[i]);
				if(fp != NULL)
					(fp)(args);
			}
		}
		else
			_putchar(format[i]);
	va_end(args);

	return (i);
}
