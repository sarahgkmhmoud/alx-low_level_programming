#include<stdio.h>
#include"main.h"
#include <stdlib.h>
#include<string.h>
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
	int n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = strlen(s1) + strlen(s2) + 1;

	a = malloc(sizeof(*a) * n);

	if (a == NULL)
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
	a[i + j] = '\0';
	return (a);
}
