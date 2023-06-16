#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"
/**
 * print_binary - Write a function that converts a binary number
 *@n: const char
 *
 */
void print_binary(unsigned long int n)
{
	int counter = 0;
	unsigned long int last = n;

	while (last > 0)
{
	last = last >> 1;
	counter++;
}
	counter--;
	if (n == 0)
	_putchar('0');

	for (; counter >=  0;)
	{
	if ((n >> counter) & 1)
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
	counter--;
	}
}
