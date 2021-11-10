#include "main.h"

/**
 * _print_string_conversion - print string given
 * @s: string to print
 * Return: lenght of character printed
 */

int _print_string_conversion(char *s)
{
	int lenght = 0;

	while (*s)
	{
		if (*s > 31 && *s < 127)
			_putchar(*s++), lenght++;
		else
		{
			/*if non-printable charactere : "\x" + hexadecimal in 2 charactere*/
			_putchar(92), lenght++;
			_putchar(120), lenght++;
			if (*s < 17)
				_putchar('0'), lenght++;
			lenght += _print_unsigned_hexadecimal_uppercase(*s++);
		}
	}

	return (lenght);
}
