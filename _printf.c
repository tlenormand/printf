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
		/*{"+", _get_flag_plus},
		{"-", _get_flag_minus},
		{" ", },
		{"0", },
		{"#", },
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

	return (NULL);
}

/**
 * _printf - function that prints anything
 * @format: format of the string to print
 * Return: print string
 */

int _printf(const char * const format, ...)
{
	int index1 = 0, i;
	char charactere[] = "csdib%ouxXSp";
	/*char flag[] = "+-";*/
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
				/*index1 = get_flag(format[index1])(*format, index1);*/
				for (i = 0; charactere[i]; i++)
					if (charactere[i] == format[i])
				search_format_of_char(format[index1])(args);
			}
		}
		else
			_putchar(format[index1]);
		index1++;
	}
	va_end(args);

	return (index1);
}
/*

int (*get_flag(char s))(char, int)
{
	flag_t flag[] = {
		{"+", _get_flag_plus},
		{"-", _get_flag_plus},
		{NULL, NULL}
	};
	int i = 0;
	int index1 = 0;

	while (flag[i].flag_sign != NULL)
	{
		if (flag[i].flag_sign[0] == s)
		{
			index1 = flag[i].function_flag;
		}
		i++;
	}
	return (0);
}
*//*
int _get_flag_plus(char *format, int index1)
{
	while (format[index1] > 47 && format[index1] < 58)
		_putchar(format[index1]), index1++;
	return (index1);
}*/
