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
char c;
	c = 'a';
	while (c <= 'z')
{
	if (c == 'e' || c == 'q')
{
	c++;
	continue;
}
	else
{
	putchar(c);
	c++;
}
}
	putchar('\n');
	return (0);
}
