#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*print_list - print the linked lists
*@h : header pointer
*Descrption: print the data
*Return: count always success
*/
size_t print_list(const list_t *h)
{

unsigned int count;

if (h == NULL)
return (-1);

count = 0;

while (h != NULL)
{
count++;
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
}
return (count);
}
