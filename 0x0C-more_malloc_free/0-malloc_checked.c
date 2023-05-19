#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 *malloc_checked - Write a function that allocates memory using
 *@b: present the intger
 *
 *Return: a always success
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a =  malloc(b);

	if (a == NULL)
		exit(98);
	return	(a);
}
