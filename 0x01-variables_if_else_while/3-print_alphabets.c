#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'Alphabet'
 * c,z: describe the chars
 * Return: Always (EOF) (Success)
 */
int main(void)
{
char c;
char x;
	x = 'a';
	while (x <= 'z')
{	putchar(x);
	x++;
}
	c = 'A';
	while (c <= 'Z')
{	putchar(c);
	c++;
}
	putchar('\n');
	return (EOF);
}
