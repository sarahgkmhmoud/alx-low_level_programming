#include<stdio.h>
#include"main.h"
/**
 * print_diagonal - prints the diagonal
 *
 * @n: The character to print
 *
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	_putchar('\n');
	else
{
	for (i = 1; i <= n; i++)
{
	for (x = 0; x < i; x++)
	 _putchar(' ');
	_putchar(92);
	_putchar('\n');
}
}
}

