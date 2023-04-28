#include<stdio.h>
#include"main.h"
/**
 * print_triangle - prints the triangle
 *
 * @size: The character to print
 *
 */
void print_triangle(int size)
{
	int i, x, z;

	if (size <= 0)
	_putchar('\n');

	else
{
	for (i = 0; i < size; i++)
{
		for (x = (size - 1); x > i; x--)
		_putchar(' ');

		for (z = 0; z <= i; z++)
		_putchar(35);
	_putchar('\n');
}
}
}
