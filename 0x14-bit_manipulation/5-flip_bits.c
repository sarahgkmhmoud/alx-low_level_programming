#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"
/**
 *flip_bits - Write a function that converts a binary number
 *@n: const char
 *@m: another digit
 *Return: bit always success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned int bit = 0;

	tmp = (n ^ m);
	while (tmp > 0)
{
	if (tmp & 1)
	bit++;
	tmp = tmp >> 1;
}
return (bit);
}
