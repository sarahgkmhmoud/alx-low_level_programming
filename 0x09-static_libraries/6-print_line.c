#include<stdio.h>
#include"main.h"
/**
 * print_line - prints the line
 *
 * @n: The character to print
 *
 */
void print_line(int n)
{
	while (n > 0)
{
	_putchar('_');
	n--;
}
	_putchar('\n');
}
