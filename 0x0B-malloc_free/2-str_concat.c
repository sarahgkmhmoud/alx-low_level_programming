#include<stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 *str_concat - that concatenates two strings.
 *@s1: Describe the array
 *@s2: Describe the array
 *Return: a always sucsess
 */
char *str_concat(char *s1, char *s2)
{
	int j, i;
	char *a;
	int n, m, s;

	n = sizeof(s1);
	m = sizeof(s2);
	s = n + m;

	a =  malloc(sizeof(*a) * sizeof(s));
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		a[j] = s1[j];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		a[j + i] = s2[i];
	}
	if (a == NULL)
	{
		return (NULL);
	}

	return (a);
}
