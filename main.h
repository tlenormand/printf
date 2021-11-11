#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct search_type - struct format
 * @type: the format of the char
 * @f: function assiciated
 */

typedef struct search_type
{
	char *type;
	int (*f)(va_list);
} search_type_t;


/*FUNCTION ALREADY EXIST*/
int _putchar(char c);

/*PROTOTYPE GIVEN IN THE EXERCICE*/
int _printf(const char * const format, ...);

/*FUNCTION CREATE IN THE EXERCICE*/
int (*search_format_of_char(const char *format))(va_list);

	/*get function*/
int _get_char(va_list args);
int _get_string(va_list args);
int _get_integer(va_list args);
int _get_binary(va_list args);
int _get_percent(va_list args);
int _get_octal(va_list args);
int _get_unsigned_decimal_integer(va_list args);
int _get_unsigned_hexadecimal_lowercase(va_list args);
int _get_unsigned_hexadecimal_uppercase(va_list args);
int _get_string_conversion(va_list args);
int _get_pointer(va_list args);
int _get_reverse(va_list args);
int _get_rot13(va_list args);

	/*print function*/
int _print_integer(int d);
int _print_octal(unsigned int o);
int _print_unsigned_integer(int d);
int _print_unsigned_decimal_integer(unsigned int ui);
int _print_unsigned_hexadecimal_lowercase(unsigned int x);
int _print_unsigned_hexadecimal_uppercase(unsigned int X);
int _print_string_conversion(char *s);

#endif /* MAIN_H */
