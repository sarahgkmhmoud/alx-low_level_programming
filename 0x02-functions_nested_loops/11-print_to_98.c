#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
{
	for (; n <= 98; n++)
{
	if (n != 98)
	printf("%d, ", n);
}
	printf("98");
	printf("\n");
}
	else if (n > 98)
{
	for (; n > 98; n--)
{
	if (n != 98)
	printf("%d, ", n);
}
	printf("98");
	printf("\n");
}
}
