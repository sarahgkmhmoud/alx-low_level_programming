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
	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}
	if (new_size > old_size)
	{
	ptr = malloc(old_size + new_size);
	return (ptr);
	if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
	}
	if (new_size == old_size)
	{
	return (ptr);
	if (ptr == NULL)
	{
		return (NULL);
			free(ptr);
	}
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);

	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
