#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'Alphabet'
 * c: describe the char
 * Return: Always (EOF) (Success)
 */
int main(void)
{
char c;
	c = 'a';
	while (c <= 'z')
{	putchar(c);
	putchar('\n');
	c++;
}
	return (EOF);
}
