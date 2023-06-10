#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"
/**
 *clear_bit - Write a function that converts a binary number
 *@n: const char
 *@index: un int
 *Return: 1 always sucess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(*n) * 8)
	return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
