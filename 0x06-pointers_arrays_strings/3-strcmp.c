#include<stdio.h>
#include"main.h"
/**
 *__strcmp - write  a function that concatenates two strings.
 * @dest: Describe the string 1
 * @src: Describe the string 2
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
	return(n);
}
