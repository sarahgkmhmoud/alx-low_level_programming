#include<stdio.h>
#include"main.h"
/**
 * print_most_numbers - prints the number from 0 to 9
 *
 * @void: The character to print
 *
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
{
	if ((n == '2') || (n == 52))
	continue;
	else
	_putchar(n);
}
	_putchar('\n');
}
