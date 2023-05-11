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

	if (n < 2)
	return (0);
	else
	{
	i = 2;
	{
		if ((n % (n - i + 1)) * is_prime_number(n - 1) != 0)
			return (1);
		else 
			return(0);
	}

	}
}

