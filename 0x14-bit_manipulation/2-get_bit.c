#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"
/**
 * print_binary - Write a function that converts a binary number
 *@n: const char
 *@index: un int
 *Return: bit always sucess
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int counter = 0;
	unsigned long int last = n;

	while (last > 0)
{
	last = last >> 1;
	counter++;
}
	if (index > counter)
	return (-1);

	if ((n >> index) & 1)
	{
	bit = 1;
	}
	else
	{
	bit = 0;
	}
	return (bit);
}
