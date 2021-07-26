#include "holberton.h"
#include <stdarg.h>



/**
 * fs_looper - parser helper becuasebetty can't allow more than 40 lines
 * >:(
 * @format: format
 * @arg_list: arg list
 * @format_list: format_list struct  array
 * Return: print count
 */

int fs_looper(const char *format, va_list arg_list, fs format_list[])
{
	int print_count = 0, s, list_len = 6;

	for (s = 0; s < list_len; s++)
	{
	if (*(format + 1) == (format_list + s)->specifier[0])
	{
		print_count += (format_list + s)->printer(arg_list);
		format++;
		break;
	}
	}
	if (s == list_len)
	{
		_putchar(*(format));
		_putchar(*(format + 1));
		print_count++;
	}

	return (print_count);
}

/**
 * format_looper - parser helper becuasebetty can't allow more than 40 lines
 * >:(
 * @format: format
 * @arg_list: arg list
 * @format_list: format_list struct  array
 * Return: print count
 */

int format_looper(const char *format, va_list arg_list, fs format_list[])
{
	int print_count = 0;

	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
			{
				_putchar('%');
				return (++print_count);
			}
			if (*(format + 1) == '%')
			{
				_putchar('%');
				format++;
				print_count++;
			} else
			{
			print_count += fs_looper(format, arg_list,
						 format_list);
			format++;
			}
		} else
		{
			_putchar(*format);
			print_count++;
		}
	}
	return (print_count);
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
	fs format_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_decimal},
		{"x", print_hex},
		{"X", print_HEX}
	};

	return (format_looper(format, arg_list, format_list));
}
