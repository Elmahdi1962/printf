#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_pow - raises the number base to power power
 *@base : the base
 *@power : the power
 *Return: return the answer
 */
int _pow(unsigned int base, int power)
{
	int i, prod = 1;

	for (i = 0; i < power; i++)
	{
		prod = prod * base;
	}
	return (prod);
}

int print_memory(va_list arg_list)
{
	int d = va_arg(arg_list,int);
	return (d);
}




/**
 * print_STR - prints a string with a `S` (upper case) specificer
 * @arg: argument
 * Return: number of character printed
 */

int print_STR(va_list arg_list)
{
        char *string = va_arg(arg_list, char *);
        int print_count = 0;

        if (string == NULL)
        {
                while ("(null)"[print_count] != '\0')
                {
                        _putchar("(null)"[print_count]);
                        print_count++;
                }
        } else
        {
        while (*string != '\0')
        {
                _putchar(*string + 32);
                string++;
                print_count++;
        }
        }
        return (print_count);

}
