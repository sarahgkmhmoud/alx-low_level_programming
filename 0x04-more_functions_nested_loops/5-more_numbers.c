#include<stdio.h>
#include"main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * @void
 *
 */
void more_numbers(void)
{
	int i, x;

	i = 0;
	while (i <= 9)
{
	x = 10;
	putchar(i);
	while (x <= 14)
{
	_putchar((x / 10) + '0');
	_putchar((x % 10) + '0');
	x++;
}
	_putchar('\n');
	i++;
}
}
