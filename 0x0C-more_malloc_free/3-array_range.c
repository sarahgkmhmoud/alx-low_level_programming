#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 *array_range - a function that concatenates two strings.
 *@min: dessripe the intger
 *@max: describe the array
 *Return: a always success
 */
int *array_range(int min, int max)
{
	int *a;
	int i, n;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;

	a = malloc(sizeof(*a) * n);

	if (a == NULL)
	return (NULL);

	for (i = 0; a[i] <= max; i++)
	{
	a[i] = min;
	min++;
	}

	return (a);
}
