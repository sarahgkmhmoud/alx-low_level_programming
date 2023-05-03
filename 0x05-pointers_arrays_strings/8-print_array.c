#include<stdio.h>
#include"main.h"
/**
 * print_array - writes the character c to stdout
 * @a : Decribe the char arry
 * @n : descrip the integer
 */
void print_array(int *a, int n)
{
	int i;
	int *p;

	p = a;

	if (sizeof(int *a) == n)
	{
	for (i = 0; i < n; i++)
	{
	printf("%d", *(p + i));
	if (i != n - 1)
	printf(", ");
	else
	printf("\n");
	}
	}
}
