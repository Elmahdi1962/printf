#include <limits.h>
#include <stdio.h>
#include "holberton.h"
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
        return (0);
}                            
