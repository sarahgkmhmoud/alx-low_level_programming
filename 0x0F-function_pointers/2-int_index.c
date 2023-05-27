#include<stdio.h>
#include <stdlib.h>
#include"function_pointers.h"
/**
 *int_index - print array
 *@array: as a string
 *@size: longint
 *@cmp: as a pointer
 *Return: (i) always success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int  i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	break;
	}
	if (i == size)
	return (-1);

	return (i);
}
