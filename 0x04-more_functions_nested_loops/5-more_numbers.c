#include<stdio.h>
#include"main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * @void
 *
 */
void more_numbers(void)
{
	int x, n;

	for (n = 0; n <= 10; n++)
{
	for (x = 0; x <= 14; x++)
{
	if (x > 9)
	_putchar((x / 10) + '0');
	_putchar((x % 10) + '0');
}
	putchar('\n');
}
}
