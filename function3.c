#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_unsigned - prints unsigned integer
 *
 * @arg_list: arguments list
 *
 * Return: number
 */

int print_unsigned(va_list arg_list)
{
int divisor = 1, i, resp;
unsigned int n = va_arg(arg_list, unsigned int);
for (i = 0; n / divisor > 9; i++, divisor *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (i + 1);
}
