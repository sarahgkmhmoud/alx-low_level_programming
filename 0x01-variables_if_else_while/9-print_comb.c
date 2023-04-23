#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'Alphabet'
 * c: describe the char
 * Return: Always (0) (Success)
 */
int main(void)
{
int c;
	c = '0';
	while (c <= '9')
{	putchar(c);
	if (c == '9')
	break;
	else
{
	putchar(',');
	putchar(' ');
	c++;
}
}
	putchar('\n');
	return (0);
}
