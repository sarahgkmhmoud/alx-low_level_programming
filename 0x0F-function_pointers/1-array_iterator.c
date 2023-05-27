#include<stdio.h>
#include <stdlib.h>
#include"function_pointers.h"
/**
 *array_iterator - print array
 *@array: as a string
 *@size: longint
 *@action: as a pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned long i;

	if (action == NULL)
		exit(1);

	for (i = 0; i < size; i++)
	action(array[i]);
}
