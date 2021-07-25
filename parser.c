#include "holberton.h"
#include <stdarg.h>


/**
 * phelper - parser helper becuasebetty can't allow more than 40 lines
 * >:(
 * @format: format
 * @arg_list: arg list
 * @format_list: format_list struct  array
 * Retunr: print count
 */

int phelper(const char *format, va_list arg_list, fs format_list[])
{

}


/**
 * parser - print the string and arguments in the right format
 *
 * @format: format string
 * @arg_list: arguments list
 * Return: number of characters printed
 */

int parser(const char *format, va_list arg_list)
{
	int print_count = 0, i, s, list_len = 2;
	fs format_list[] = {
		{"c", print_char},
		{"s", print_string}
	};

	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + (i + 1)) == '\0')
			{
				_putchar('%');
				return (++print_count);
			}
			if (*(format + (i + 1)) == '%')
			{
				_putchar('%');
				i++;
				print_count++;
			} else
			{
			for (s = 0; s < list_len; s++)
			{
			if (*(format + (i + 1)) == (format_list + s)->
			    specifier[0])
			{
			print_count += (format_list + s)->printer(arg_list);
			i++;
			break;
			}
			}
			if (s == list_len)
			{
				_putchar(*(format + i));
				print_count++;
			}
			}
		} else
		{
			_putchar(*(format + i));
			print_count++;
		}
	}
	return (print_count);
}
