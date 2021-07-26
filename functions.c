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

int print_char(va_list arg_list)
{
	char c = va_arg(arg_list, int);
	int print_count = 0;

	_putchar(c);

	return (++print_count);
}




/**
 * print_string - prints strings
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_string(va_list arg_list)
{
	char *string = va_arg(arg_list, char *);
	int print_count = 0;

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
		print_count++;
	}
	return (print_count);
}


/**
 * print_decimal - prints decimal numbers
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_decimal(va_list arg_list)
{
	int d = va_arg(arg_list, int), mult = 1, dc, print_count = 0;

	if (d < 0)
	{
		d = -d;
		_putchar('-');
	}

	dc = d;
	if (d < 10 && d >= 0)
	{
		_putchar(d + '0');
		print_count++;
	}
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
			print_count++;
			d -= (d / mult) * mult;
			mult /= 10;
		}
	}

	return (print_count);
}


/**
 * print_hex - prints hex numbers
 *
 * @arg_list: arguments list
 *
 * Return: number of characters printed
 */

int print_hex(va_list arg_list)
{
        int d = va_arg(arg_list, int), mult = 1, dc, print_count = 0;

        if (d < 0)
        {
                d = -d;
                _putchar('-');
        }

        dc = d;
        if (d < 10 && d >= 0)
        {
                _putchar(d + '0');
                print_count++;
        }
        else
        {
                while (dc > 9)
                {
                        mult *= 16;
                        dc /= 16;
                }
                while (mult > 0)
                {
			if ((d / mult) < 10)
				_putchar((d / mult) + '0');
			else
			{
				switch ((d / mult))
				{
				case 10:
					_putchar('A');
					break;
				case 11:
					_putchar('B');
					break;
				case 12:
					_putchar('C');
					break;
				case 13:
					_putchar('D');
					break;
				case 14:
					_putchar('E');
					break;
				case 15:
					_putchar('F');
					break;
				}
			}
                        print_count++;
                        d -= (d / mult) * mult;
                        mult /= 10;
                }
        }

        return (print_count);
}


/**
 * inttostr - convert numbers to string
 *
 * @number: number to convert
 *
 * Return: the string containing the number
 */

char *inttostr(int number)
{
	int i, nlen = intlen(number), rem;
	char *str = malloc(sizeof(char) * (nlen + 1));

	for (i = 0; i < nlen; i++)
	{
		rem = number % 10;
		number = number / 10;
		str[nlen - (i + 1)] = rem + '0';
	}
	str[nlen] = '\0';
	return (str);
}
