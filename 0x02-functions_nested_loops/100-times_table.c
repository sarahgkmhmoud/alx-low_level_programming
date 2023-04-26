#include<stdio.h>
#include"main.h"
/**
 * print_times_table  -  that prints the 9 times table, starting with 0.,
 * @n: The character to print
 */
void print_times_table(int n)
{
int i, x, multi, z;
if (n  >= 0 && n < 15)
{
	for (x = 0; x <= n; x++)
{
	_putchar('0');
	for (i = 1; i <= n; i++)
{
	multi = i * x;
	if (multi < 10)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar((multi % 10) + '0');
}
	else if (multi < 100 && multi >= 10)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((multi / 10) + '0');
	_putchar((multi % 10) + '0');
}
	else
{
	_putchar(',');
	_putchar(' ');
	_putchar((multi / 100) + '0');
	z = multi / 10;
	_putchar((z % 10) + '0');
	_putchar((multi % 10) + '0');
}
}
	_putchar('\n');
}
}
}
