#include<stdio.h>
#include"main.h"
/**
 *_abs - prints the signs of number
 *@n: The int to print
 *
 * Return: On success i.
 */
int _abs(int n)
{
int i = n;

	if (i > 0)
{
	i *= 1;
	return (i);
}
	else if (i == 0)
{
	i *= 1;
	return (i);
}
	else
{
	i *= -1;
	return (i);
}
}
