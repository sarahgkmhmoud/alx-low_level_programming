#include<stdio.h>
#include"main.h"
/**
 * _puts - writes the character c to stdout
 * @str : Decribe the char arry
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
