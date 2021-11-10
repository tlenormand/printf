#include "main.h"

/**
 * _get_rot13 - get the string from _printf %R
 * then print the rot13 string
 * @args: argument corresponding to %R
 * Return: lenght of character printed
 */

int _get_rot13(va_list args)
{
	int i, j, lenght = 0, number_find = 0;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot_number = va_arg(args, char *);

	if (rot_number == 0)
		rot_number = "(null)";

	for (i = 0; rot_number[i]; i++)
	{
		for (j = 0; alphabet[j]; j++)
		{
			if (rot_number[i] == alphabet[j])
			{
				_putchar(rot13[j]), number_find = 1;
				lenght++;
				break;
			}
		}
		if (number_find == 0)
		{
			_putchar(rot_number[i]);
			lenght++;
		}
		number_find = 0;
	}

	return (lenght);
}
