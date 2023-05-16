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
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	return (NULL);
		a = malloc(sizeof(*a) * height);

	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	a[i] = malloc(sizeof(*a[i]) * width);
	for (j = 0; j < width; j++)
	{
	if (a[i] == NULL)
	{
		for (i = 0; i < height; i++)
		return (NULL);
	}
		a[i][j] = 0;
	}
	}
	return (a);
}
