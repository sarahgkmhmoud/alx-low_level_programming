#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*print_listint - print the linked lists
*@h : header pointer
*Descrption: print the data
*Return: count always success
*/
size_t print_listint(const listint_t *h)
{

unsigned int count;


count = 0;

while (h != NULL)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
