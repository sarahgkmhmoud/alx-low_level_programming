#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"
/**
 *get_endianness - Write a function that converts a binary number
 *Return: 0 always success
 */
int get_endianness(void)
{
	int i;
	char *c;

	c = (char *)&i;

	if (*c == 1)
	{
		return (0);
	}
		return (1);
}
