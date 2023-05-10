#include<stdio.h>
#include"main.h"
/**
 * _pow_recursion - prints a string, followed by a new line.
 *@x: The integr
 *@y: the integer
 *Return: On success 1.
 */
int _pow_recursion(int x, int y)
{

	if (y ==  0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}

