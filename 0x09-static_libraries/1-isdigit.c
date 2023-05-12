#include<stdio.h>
#include"main.h"
/**
 *_isdigit  - checks for digit
 *@c: The character to print
 *
 * Return: On success 1.
 */
int _isdigit(int c)
{
int N = (int) (c);
if (N >= 48 && N <= 57)
	return (1);
else
	return (0);
}
