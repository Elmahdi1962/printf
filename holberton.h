#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct format_specifiers - struct holing each format specifier with
 * its callback
 * @specifier: the format specifier
 * @printer: callback for printing the argument
 */
typedef struct format_specifiers
{
	char *specifier;
	int (*printer)(va_list arg_list);
} fs;

int _putchar(char c);
int parser(const char *format, va_list arg_list);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_decimal(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_octal(va_list arg_list);
char *inttostr(int number);
int _strlen(char *string);
int intlen(int number);
int isoctal(char *string);
int octaltodecimal(char *string);
int fs_looper(const char *format, va_list arg_list, fs format_list[]);
int format_looper(const char *format, va_list arg_list, fs format_list[]);

#endif
