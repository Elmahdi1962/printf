#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - printsand formats strings
 *
 * @format: format string
 *
 * Retunr: number of charachters printed
 */

int _printf(const char *format, ...)
{
	int print_count = 0;
	va_list arg_list;

	va_start(arg_list, format);
	if (format == NULL)
		return (0);

	print_count = parser(format, arg_list);

	if (print_count)
		return (print_count);
	va_end(arg_list);
	return (0);
}
