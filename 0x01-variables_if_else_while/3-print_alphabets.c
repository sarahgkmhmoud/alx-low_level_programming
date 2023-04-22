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
char z;
	c = 'a';
	while (c <= 'z')
{	putchar(c);
	c++;
}
{
	z = 'A';
	while (z <= 'Z')
	putchar(z);
	z++;
}
	putchar('\n');
	return (EOF);
}
