#include "holberton.h"

/**
 * intlen - count how many digit the number have
 * @number: the number
 * Return: int the length
 */

int intlen(int number)
{
	int len = 0, n = number;

	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}



/**
 * isoctal - checks number if it's octal
 * @string: the number in a string format
 * Return: 0 if false 1 if true
 */

int isoctal(char *string)
{
	int i;

	for (i = 0; *(string + i) != '\0'; i++)
	{
		if (*(string + i) > '7')
			return (0);
	}
	return (1);
}


/**
 * octaltodecimal - convert octal to decimal
 * @string: the number in a string format
 * Return: octal as decimal(int)
 */

int octaltodecimal(char *string)
{
	int slen = _strlen(string), i, dec_value = 0, base = 1;
	int lastdigit = slen - 1;

	for (i = 0; i < slen; i++)
	{
		dec_value += lastdigit * base;
		base *= 8;
		lastdigit--;
	}
	return (dec_value);
}


/**
 * _strlen - return length of string
 *
 * @s: string to count
 *
 * Return: the size
 */


int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	return (counter);
}
