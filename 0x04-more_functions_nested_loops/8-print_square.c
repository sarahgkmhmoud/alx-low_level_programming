#include<stdio.h>
#include"main.h"
/**
 * print_square - that print square
 * @size: The character to print
 *
 */
void print_square(int size)
{
	int i, x;

	if (size <= 0)
	_putchar('\n');

	else
{
	for (i = 0; i < size; i++)
{
		for (x = 0; x < size; x++)
		_putchar('#');
	_putchar('\n');
}
}
}
