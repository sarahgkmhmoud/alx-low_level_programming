#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"
/**
 *binary_to_uint - Write a function that converts a binary number
 *@b: const char
 *
 *Return: i always
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	unsigned int i = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = strlen(b);


	for (c = len - 1; c >= 0; c--)
{
	if (b[c] != '0' && b[c] != '1')
		return (0);

	if (b[c] == '1')
		i += 1 << k;

	k++;
}
	return (i);
}
