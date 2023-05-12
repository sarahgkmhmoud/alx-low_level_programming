#include<stdio.h>
#include"main.h"
/**
 *reverse_array  - write  a function that reverse the integer
 * @a: Describe the array
 * @n: Describe the number of element of array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0;  i < (n / 2); i++)
	{
	int tmp  = a[i];

	a[i] = a[n - 1 - i];

	a[n - 1 - i] = tmp;
	}

}
