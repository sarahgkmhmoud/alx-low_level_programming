#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"
/**
 *get_bit - Write a function that converts a binary number
 *@n: const char
 *@index: un int
 *Return: bit always sucess
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(n) * 8)
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
