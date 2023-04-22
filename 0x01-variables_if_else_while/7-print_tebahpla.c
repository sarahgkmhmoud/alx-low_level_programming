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
	c = 'z';
	while (c >= 'a')
{	putchar(c);
	c--;
}
	putchar('\n');
	return (0);
}
