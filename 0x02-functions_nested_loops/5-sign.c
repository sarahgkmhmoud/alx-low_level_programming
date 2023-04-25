#include<stdio.h>
#include"main.h"
/**
 *print_sign - prints the signs of number
 *@n: The int to print
 *
 * Return: On success 1.
 */
int print_sign(int n)
{
int i = n;

	if (i > 0)
{
	_putchar('+');
	return (1);
}
	else if (i == 0)
{
	_putchar('0');
	return (0);
}
	else
{
	_putchar('-');
	return (-1);
}
}
