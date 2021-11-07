#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>


/**
 * struct search_type - struct format
 * @type: the format of the char
 * @f: function assiciated
 */

typedef struct search_type
{
	char *type;
	void (*f)(va_list);
} search_type_t;


/*FUNCTION ALREADY EXIST*/
int _putchar(char c);

/*PROTOTYPE GIVEN IN THE EXERCICE*/
int _printf(const char * const format, ...);

/*FUNCTION CREATE IN THE EXERCICE*/
	/*get function*/
void _get_char(va_list args);
void _get_string(va_list args);
void _get_integer(va_list args);
void _get_binary(va_list args);
void _get_percent(va_list args);
void _get_octal(va_list args);
void _get_unsigned_decimal_integer(va_list args);
void _get_unsigned_hexadecimal_lowercase(va_list args);
void _get_unsigned_hexadecimal_uppercase(va_list args);

	/*print function*/
void _print_integer(int d);
void _print_binary(unsigned int b);
void _print_octal(unsigned int o);
void _print_unsigned_integer(int d);
void _print_unsigned_decimal_integer(unsigned int ui);
void _print_unsigned_hexadecimal_lowercase(unsigned int x);
void _print_unsigned_hexadecimal_uppercase(unsigned int X);

#endif /* MAIN_H */
