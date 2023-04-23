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
char str;
int c;
c = 48;
str = 'a';
	while (c <= 57)
{
	putchar(c);
	c++;
}
	while (str <= 'f')
{
	putchar(str);
	str++;
}
	putchar('\n');
	return (0);
}
