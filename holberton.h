#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

typedef struct format_specifiers
{
	char *specifier;
	int (*printer)(va_list arg_list);
} fs;

int _putchar(char c);
int parser(const char* format, va_list arg_list);
int _printf(const char *format, ...);

#endif
