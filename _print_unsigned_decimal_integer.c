#include "main.h"

/**
 * _print_unsigned_decimal_integer - print unsigned integer given
 * @ui: unsigned integer to print
 * Return: lenght of character printed
 */

int _print_unsigned_decimal_integer(unsigned int ui)
{
	int lenght = 0;

	if (ui / 10)
		lenght = _print_unsigned_decimal_integer(ui / 10);
	_putchar(ui % 10 + '0'), lenght++;

	return (lenght);
}
