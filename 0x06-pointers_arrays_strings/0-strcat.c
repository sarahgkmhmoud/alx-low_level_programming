#include<stdio.h>
#include"main.h"
/**
 *_strcat - write  a function that concatenates two strings.
 * @dest: Describe the string 1
 * @src: Describe the string 2
 * Return: Always dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
{
	dest[i + j] = src[j];
}
		return (dest);
}
