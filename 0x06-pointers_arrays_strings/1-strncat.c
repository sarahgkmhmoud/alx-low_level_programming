#include<stdio.h>
#include"main.h"
/**
 *_strncat - write  a function that concatenates two strings.
 * @dest: Describe the string 1
 * @src: Describe the string 2
 * @n:  Describ the integer
 * Return: Always dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (n > 0)
{
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
{
	dest[i + j] = src[j];
}
		return (dest);
}
		else
		return (dest);

}
