#include "main.h"

/**
 * _get_binary - get the integer from _printf %b
 * then convert into binary
 * @args: argument corresponding to %b
 * Return: lenght of character printed
 */

int _get_binary(va_list args)
{
	unsigned int b = va_arg(args, unsigned int);
	int len, i;
	char *str_binary = NULL;

	if (b == 0)
		return (_putchar('0'), 1);

	str_binary = malloc(sizeof(char) * 32);
	if (str_binary == NULL)
	{
		free(str_binary);
		return (0);
	}

	for (i = 0; b != 0; i++)
	{
		str_binary[i] = b % 2 + '0';
		b /= 2;
	}

	for (len = 0; str_binary[len]; len++)
		;

	for (len--; str_binary[len]; len--)
		_putchar(str_binary[len]);

	free(str_binary);

	return (i);
}
