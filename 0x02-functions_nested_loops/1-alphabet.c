#include<stdio.h>
#include"main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * @void: The character to print
 *
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}
	_putchar('\n');
}
