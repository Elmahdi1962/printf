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
        len = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
        len1 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
        printf("%d, %d\n", len, len1);
        len = _printf("%    s\n", "1Hi");
        len1 = printf("%    s\n", "2Hi");
        printf("%d, %d\n", len, len1);
        printf("\n");
        printf("%!\n");
        _printf("%!\n");
	len1=_printf("%%\n");
	len=printf("%%\n");
	printf("%d, %d\n", len1, len);

        len=printf("%");
        printf("\n%d\n", len);

	len = _printf("%    s\n", "1Hi");
	printf("%d\n", len);

        len = _printf("%d", 2.5);
        printf("\n%d\n", len);

        len = _printf("%c", 0);
        printf("%d\n", len);

	len=_printf("Len:[%010-i]\n", INT16_MAX);
	printf("%d\n",len);

        len = _printf("%c", NULL);
        printf("%d\n", len);

	        len = _printf("%d", -255);
        printf("%d\n", len);

	return (0);
}
