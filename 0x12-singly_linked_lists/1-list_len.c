#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*list_len - lenghth  the linked lists
*@h : header pointer
*Descrption: print the data
*Return: count always success
*/
size_t list_len(const list_t *h)
{

unsigned int count;

if (h == NULL)
return (-1);


count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}


























