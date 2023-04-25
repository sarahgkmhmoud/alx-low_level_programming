#include<stdio.h>
#include"main.h"
/**
 * jack_bauer  -  prints every minute of the day of Jack Bauer,
 * @void: The character to print
 *
 */
void jack_bauer(void)
{
int i, x;
x = 0;
	while (x < 24)
{
	i = 0;
	while (i < 60)
{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(':');
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar('\n');
	i++;
}
	x++;
}
}
