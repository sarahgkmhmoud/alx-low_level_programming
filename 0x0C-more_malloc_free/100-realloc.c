#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 *_realloc - Write a function that reallocates a memory block
 *@ptr: present the intger
 *@old_size: as a parameter
 *@new_size: as a parameter
 *Return: ptr always success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size > old_size)
	{
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);
	}
	return (p);
	if (new_size == old_size)
	{
	return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

	}
}
