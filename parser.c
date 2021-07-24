#include "holberton.h"
#include <stdarg.h>



/**
 * parser - print the string and arguments in the right format
 *
 * @format: format string
 * @arg_list: arguments list
 * Return: number of characters printed
 */

int parser(const char* format, va_list arg_list)
{
	int print_count = 0, i, s, list_len = 2;
	fs format_list[2];

	format_list[0] = {"c", print_char(arg_list)};
	format_list[1] = {"s", print_string(arg_list)};


	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + (i + 1)) == '%')
			{
				_putchar('%');
				i++;
				print_count++;
			} else if (*(format + (i + 1)) == '\0')
			{
				return (print_count);
			} else
			{
				for (s = 0; s < list_len; s++)
				{
				if (*(format + (i + 1)) == (format_list + s)->
				    specifier)
				{
				print_count += (format_list + s)->
					printer(arg_list);
				i++;
				break;
				}
				}

				if (s == list_len)
				{
					_putchar(*(format + i));
					i++;
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