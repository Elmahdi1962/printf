#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>


/**
 * print_char - prints characters
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_char(va_list arg_list __attribute__((unused)))
{
	char c = va_arg(arg_list, int);

	_putchar(c);
	return (0);
}




/**
 * print_string - prints strings
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_string(va_list arg_list __attribute__((unused)))
{
	return (0);
}


/**
 * print_decimal - prints decimal numbers
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_decimal(va_list arg_list __attribute__((unused)))
{
	int d = va_arg(arg_list, int), mult = 1, dc;

	if (d < 0)
	{
		_putchar('-');
		d *= -1;
	}
	dc = d;
	if (d < 10 && d >= 0)
		_putchar(d + '0');
	else
	{

		while (dc > 9)
		{
			mult *= 10;
			dc /= 10;
		}
		while (mult > 0)
		{
			_putchar((d / mult) + '0');
			d -= (d / mult) * mult;
			mult /= 10;
		}
	}
	return (0);
}


/**
 * print_integer - prints integer numbers
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_integer(va_list arg_list __attribute__((unused)))
{
	int i = va_arg(arg_list, int);

	if (i < 10)
		_putchar(i + '0');
	else
		_putchar('0');
	return (0);
}
