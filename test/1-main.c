#include <stdio.h>
#include "/home/vagrant/printf/main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

/* to compile, use command : gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/1-main.c *.c -o _printf */
int main(void)
{
    char *str = "bonjour\n";
    int d = 123456789;
    unsigned int ui;
    int len2;
    void *addr;
    int nombre = 123;

    addr = (void *)0x7ffe637541f0;

    len2 = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;

/*test the simple sentence*/
    _printf("Let's try to printf %% a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("vtbh;v!jkj!:*;,^$rg'thçé_oi&éz\n");
    printf("vtbh;v!jkj!:*;,^$rg'thçé_oi&éz\n");

/*test the string*/
    _printf("%s", str);
    printf("%s", str);
    str = "vtbh;v!jkj!:*;,^$r4656g'thçé_oi&éz\n";
    _printf("%s", str);
    printf("%s", str);

    _printf("%i\n", d);
    printf("%i\n", d);
    _printf("%i\n", len2);
    printf("%i\n", len2);

    _printf("%b\n", 98);

    _printf("bonjour%%tout%%le%%monde\n");
    printf("bonjour%%tout%%le%%monde\n");

    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("%S\n", "Best\nSchool");

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    printf("c'est%+7dça\n", nombre);

    _printf("Unknown:[%r]\n");



    return (0);
}