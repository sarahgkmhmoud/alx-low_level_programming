#include<stdio.h>
#include"main.h"
/**
 *_isalpha - checks for all characters
 *@c: The character to print
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
int N = (int) (c);
if ((N >= 97 && N <= 122) || (N >= 65 && N <= 90))
	return (1);
else
	return (0);
}
