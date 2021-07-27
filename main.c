#include <limits.h>
#include <stdio.h>
#include "holberton.h"
#include <inttypes.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len1;
        _printf("Character:[%c]\n", '\0');
        printf("Character:[%c]\n", '\0');
	len =_printf("%!\n");
	len1=printf("%!\n");
	printf("\n%d\n", len);
	printf("\n%d", len1);
	return (0);
}
