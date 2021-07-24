#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * print_char - prints characters
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_char(va_list arg_list __attribute__((unused)))
{
	char c __attribute__((unused)) = va_arg(arg_list, int);
	_putchar('z');
	printf("ccc");
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
