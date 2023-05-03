#include<stdio.h>
#include"main.h"
/**
 * puts2 - writes the character c to stdout
 * @str : Decribe the char arry
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
		i++;
	}
		else
		i++;
	}
	_putchar('\n');
}
