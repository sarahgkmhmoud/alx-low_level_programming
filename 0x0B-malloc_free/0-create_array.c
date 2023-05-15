#include<stdio.h>
#include"main.h"
#include <stdlib.h>
#include<limits.h>
/**
 *create_array - creates an array of chars
 *@size: Describe the integer
 *@c: descrip the char
 *
 *Return: a always sucsess
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);


	a =  malloc(INT_MAX);
	if (a == NULL)
		return (NULL);

		for (i = 0; i < size; i++)
		*(a + i) = c;
	return (a);
}
