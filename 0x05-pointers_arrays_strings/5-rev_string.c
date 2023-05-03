#include<stdio.h>
#include"main.h"
/**
 * rev_string - writes the character c to stdout
 * @s : Decribe the char arry
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] > '\0'; i++)
	{
	}
	while (i - 1 >= -1)
	{
	_putchar(s[i]);
	if (i == 0)
{
	_putchar('\n');
	break;
}
	else
	i--;
	}
}
