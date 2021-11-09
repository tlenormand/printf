#include "main.h"

/**
 * _get_pointer - get the adress from _printf %p
 * then print the adress
 * @args: argument corresponding to %p
 */

void _get_pointer(va_list args)
{
	void *p = (va_arg(args, void *));
	intptr_t x = (intptr_t)p;
	char buf[2 + sizeof(x) * 2];
	size_t i;

	buf[0] = '0';
	buf[1] = 'x';
	for (i = 0; i < sizeof(x) * 2; i++)
	{
		buf[i + 2] = "0123456789abcdef"
		[(x >> ((sizeof(x) * 2 - 1 - i) * 4)) & 0xf];
	}
	for (i = 0; i < sizeof(buf); i++)
	{
		if (i == 2 && buf[i] == '0')
			while (buf[i] == '0')
				i++;
		_putchar(buf[i]);
	}
}
