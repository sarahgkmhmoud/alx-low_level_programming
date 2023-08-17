#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*print_dlistint - print the linked lists
*@h : header pointer
*Descrption: print the data
*Return: count always success
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *curr = h;

	for (; curr != NULL; curr = curr->next, count++)
	printf("%d\n", curr->n);
	return (count);
}
