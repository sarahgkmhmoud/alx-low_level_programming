#include<stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 * alloc_grid - that returns a pointer to a 2 dimensional array
 *@width: Describe the integer
 *@height: Describe the integer
 *Return: a always sucsess
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **a;
	int *b;
	
	a = &b;

	if (width == 0 || height == 0)
	return (NULL);
		a = malloc(sizeof(**a) * (width * height));

	if (a == NULL)
	{
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	for (i = 0; i < height; i++)
	{
		a[j][i] = 0;
	}
	}
	return (a);
}
