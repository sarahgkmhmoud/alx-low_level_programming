#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success i
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
{
	while (i <= 98)
{
	printf("%d, ", i);
	i++;
}
	_putchar('\n');
}
	else
{
	while (i >= 98)
{
	printf("%d, ", i);
	i--;
}
	_putchar('\n');
}
}
