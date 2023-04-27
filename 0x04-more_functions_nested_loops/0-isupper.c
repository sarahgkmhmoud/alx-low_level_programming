#include<stdio.h>
#include"main.h"
/**
 *_isupper - checks for uppercase character
 *@c: The character to print
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
int N = (int) (c);
if (N >= 65 && N <= 90)
	return (1);
else
	return (0);
}
