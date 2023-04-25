#include<stdio.h>
#include"main.h"
/**
 *_islower - checks for lowercase character
 *@c: The character to print
 *
 * Return: On success 1.
 */
int _islower(int c)
{
int N = (int) (c);
if (N >= 97 && N <= 122)
	return (1);
else
	return (0);
}
