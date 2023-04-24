#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'Two Digits)
 * x,i: describe the integers
 * Return: Always (0) (Success)
 */
int main(void)
{
int i, x, y;
i = 0;
	while (i <= 99)
{
	x = 0;
	y = 48;
	if ((i / 10) != (i % 10) && (i / 10) < (i % 10))
{
	while (x <= 9)
{
	if ((x != (i / 10) || x != (i % 10)) && ((i % 10) < x))
{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(y);
	x++;
	y = (y + 1);
	if (i < 78)
{
	putchar(',');
	putchar(' ');
}
}
	else
{
	x++;
	y = (y + 1);
}
}
	i++;
}
	else
	i++;
}
	putchar ('\n');
	return (0);
}
