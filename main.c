#include <limits.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

_printf("Character:[%05.2s]\n", "\x12\x22\x05");
printf("Character:[%05.2s]\n", "\x12\x22\x05");
    
    _printf("string: %s, string: %s \n", "hello", "world");
    _printf("char: %c, char: %c \n", "h", "w");
    printf("char: %c, char: %c \n", "h", "w");
    _printf("char: %c, char: %c \n", 'h', 'w');
    printf("char: %c, char: %c \n", 'h', 'w');
    _printf("int using d: %d\n", 5);
    _printf("octal using d: %d\n", 012);
    _printf("hex using d: %d\n\n", 0xff);
    _printf("binary:[%b]\n", 98);
    printf("binary:[%d]\n", 1100010);
printf("binary:[%d]\n",  _printf("binary:[%b]\n", 98));
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
