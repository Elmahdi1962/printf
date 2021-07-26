#include "holberton.h"
#include <stdlib.h>
/**
 * print_octal - prints a hexadecimal
 * @arg_list: list that contains the hexadecimal
 * Return: number.
 */
int print_octal(va_list arg_list)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int copia;
	char *octa;
	int i, s = 0, print_count = 0;

	if (num == 0)
		return (_putchar('0'));
	for (copia = num; copia != 0; s++)
	{
		copia = copia / 8;
	}
	octa = malloc(s);
	if (!octa)
		return (-1);
	for (i = s - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < s && octa[i] == '0'; i++)
		;
	for (; i < s; i++)
	{
		_putchar(octa[i]);
		print_count++;
	}
	free(octa);
	return (print_count);
}
