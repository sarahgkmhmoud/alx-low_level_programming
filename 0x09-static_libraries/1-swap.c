#include<stdio.h>
#include"main.h"
/**
 * swap_int - writes the character c to stdout
 * @a : Decribe the integer a
 * @b : Describe the integer b
 *
 */
void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;
}
