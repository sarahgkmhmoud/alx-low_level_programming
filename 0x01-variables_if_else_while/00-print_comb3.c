#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's combine two digits'
 * @x: describe the integer
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	while (x < 100)
{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	if (x < 99)
{
	putchar(',');
	putchar(' ');
}
	x++;
}
	putchar('\n');
	return (0);
}

