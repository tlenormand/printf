#include "main.h"

/**
 * _print_string_conversion - print string given
 * @s: string to print
 */

void _print_string_conversion(char *s)
{
	while (*s)
	{
		if (*s > 31)
			_putchar(*s++);
		else
		{
			/*if non-printable charactere : "\x" + hexadecimal in 2 charactere*/
			_putchar(92);
			_putchar(120);
			if (*s < 17)
				_putchar('0');
			_print_unsigned_hexadecimal_uppercase(*s++);
		}
	}
}
