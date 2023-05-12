#include<stdio.h>
#include"main.h"
/**
 *
 *
 *
 *
 */
int is_prime_number(int n)
{
	int i;
	i = 2;

	if (n == 2)
	return (1);
	return((n % (n - i + 1)) * is_prime_number(n - 1));

}
