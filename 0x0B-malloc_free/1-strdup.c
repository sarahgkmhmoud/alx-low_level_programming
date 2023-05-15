#include<stdio.h>
#include"main.h"
#include <stdlib.h>
#include<limits.h>
/**
 *_strdup - contains a copy of the string given
 *@str: Describe the array
 *
 *Return: a always sucsess
 */
char *_strdup(char *str)
{
	int j, i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	}

	a =  malloc(sizeof(*a) * j);
	if (a == NULL)
	{
		return (NULL);
	}


		for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];


	return (a);
}
