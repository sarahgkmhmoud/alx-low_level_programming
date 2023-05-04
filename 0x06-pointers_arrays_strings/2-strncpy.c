#include<stdio.h>
#include"main.h"
/**
 *_strncpy - write  a function that concatenates two strings.
 * @dest: Describe the string 1
 * @src: Describe the string 2
 * @n:  Describ the integer
 * Return: Always dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > 0)
{
	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
		return (dest);
}
		else
		return (dest);
}
