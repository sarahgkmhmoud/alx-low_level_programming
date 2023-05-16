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

	n = strlen(s1) + strlen(s2);


	a = malloc(sizeof(*a) * n);
	if (s1[0] == 'N' && s1[1] == 'U' && s1[2] == 'L' && s1[3] == 'L')
		a = s2;
	if (s2[0] == 'N' && s2[1] == 'U' && s2[2] == 'L' && s2[3] == 'L')
		a = s1;
	if (s1[0] == 'N' && s1[1] == 'U' && s1[2] == 'L' && s1[3] == 'L')
	{
	if (s2[0] == 'N' && s2[1] == 'U' && s2[2] == 'L' && s2[3] == 'L')
	a = '\0';
	}

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
