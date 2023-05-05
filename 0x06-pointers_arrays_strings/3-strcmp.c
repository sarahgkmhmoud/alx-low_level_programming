#include<stdio.h>
#include"main.h"
/**
 *_strcmp  - write  a function that concatenates two strings.
 * @s1: Describe the string 1
 * @s2: Describe the string 2
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0'; i++)
{
	if (s1[i] == s2[i])
	n = 0;

	else if (s1[i] > s2[i])
{
	n = (s1[i] - s2[i]);
	break;
}

	else
{
	n = (s1[i] - s2[i]);
	break;
}
}
	return (n);
}
