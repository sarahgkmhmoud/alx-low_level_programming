#include<stdio.h>
#include"main.h"
/**
 * times_table  -  that prints the 9 times table, starting with 0.,
 * @void: The character to print
 *
 */
void times_table(void)
{
int i, x, n;
x = 0;
	while (x <= 9)
{
	i = 1;
	_putchar('0');
	while (i <= 9)
{
	n = i * x;
	if (n < 10)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((n % 10) + '0');
}
	else
{
	_putchar(',');
	_putchar(' ');
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}
	i++;
}
	_putchar('\n');
	x++;
}
}
