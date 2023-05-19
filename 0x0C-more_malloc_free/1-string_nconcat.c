#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 *string_nconcat - a function that concatenates two strings.
 *@s1: dessripe the intger
 *@s2: describe the array
 *@n: describe the integer
 *Return: a always success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, len;

	if (n >= strlen(s2))
		n = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = (unsigned int) strlen(s1) + n + 1;

	a = malloc(sizeof(*a) * len);

	if (a == NULL)
	return (NULL);

	else
	{
	for (i = 0; s1[i] != '\0'; i++)
	{
	a[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';
	}
	return (a);
}
