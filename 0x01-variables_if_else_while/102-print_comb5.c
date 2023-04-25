#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'Two Digits)
 * c: describe the char
 * Return: Always (0) (Success)
 */
int main(void)
{
int i, x;
x = 0;
	while (x < 100)
{
	i = x;
	while (i < 100)
{
	if (i != x)
{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(' ');
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	i++;
	if (x < 98)
{
	putchar(',');
	putchar(' ');
}
}
	else
	i++;
}
	x++;
}
	putchar('\n');
	return (0);
}
