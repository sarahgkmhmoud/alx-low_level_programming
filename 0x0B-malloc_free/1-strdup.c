#include<stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 *_strdup - contains a copy of the string given
 *@str: Describe the array
 *
 *Return: a always sucsess
 */
char *_strdup(char *str)
{
	int i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	a =  malloc(sizeof(*str));
	if (a == NULL)
	{
		return (NULL);
	}


		for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];

	return (a);
}
