#include<stdio.h>
#include"main.h"
/**
 * puts_half - writes the character c to stdout
 * @str : Decribe the char arry
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] > '\0'; i++)
	{
	}
	if (i % 2 == 0)
	for (i = i / 2; str[i] > '\0'; i++)
		_putchar(str[i]);
	else
	for (i = i / 2; str[i + 1] > '\0'; i++)
		_putchar(str[i + 1]);
	_putchar('\n');
}
