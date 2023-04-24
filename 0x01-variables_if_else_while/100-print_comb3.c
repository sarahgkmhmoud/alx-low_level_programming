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
int i;
i = 0;
	while (i < 99)
{
	if ((i / 10) != (i % 10) && (i / 10) < (i % 10))
{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	i++;
	if (i < 89)
{
	putchar(',');
	putchar(' ');
}

}

	else
	i++;
}
	putchar('\n');
	return (0);
}
