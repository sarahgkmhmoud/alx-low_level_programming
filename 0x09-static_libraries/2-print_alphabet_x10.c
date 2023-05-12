#include<stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase
 *
 * @void: The character to print
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0; i <= 9; i++)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}
	_putchar('\n');
}
}
