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





/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct flag
{
	char *flag_sign;
	int (*function_flag)(char *format, int index1);
} flag_t;




int (*get_flag(char s))(char, int);
int _get_flag_plus(char *format, int index1);






/*FUNCTION ALREADY EXIST*/
int _putchar(char c);

/*PROTOTYPE GIVEN IN THE EXERCICE*/
int _printf(const char * const format, ...);

/*FUNCTION CREATE IN THE EXERCICE*/
void (*search_format_of_char(char s))(va_list);

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
void _get_string_conversion(va_list args);
void _get_pointer(va_list args);

	/*print function*/
void _print_integer(int d);
void _print_binary(unsigned int b);
void _print_octal(unsigned int o);
void _print_unsigned_integer(int d);
void _print_unsigned_decimal_integer(unsigned int ui);
void _print_unsigned_hexadecimal_lowercase(unsigned int x);
void _print_unsigned_hexadecimal_uppercase(unsigned int X);
void _print_string_conversion(char *s);

#endif /* MAIN_H */
