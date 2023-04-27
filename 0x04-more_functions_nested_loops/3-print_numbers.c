#include<stdio.h>
#include"main.h"
/**
 * print_numbers - prints the number from 0 to 9
 *
 * @void: The character to print
 *
 */
void print_numbers(void)
{
	char number;

	for (number = 'a'; number <= 'z'; number++)
{
	_putchar(number);
}
	_putchar('\n');
}
