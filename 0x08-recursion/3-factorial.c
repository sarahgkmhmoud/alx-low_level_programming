#include<stdio.h>
#include"main.h"
/**
 *factorial - prints a string, followed by a new line.
 *@n: The integr
 *Return: On success 1.
 */
int factorial(int n)
{

	if (n ==  0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

