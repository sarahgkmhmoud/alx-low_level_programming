#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*print_listint_safe - print the linked lists
*@head : header pointer
*Descrption: print the data
*Return: count always success
*/
size_t print_listint_safe(const listint_t *head)
{

unsigned int count;
const listint_t *pre, *post;

pre = head;
post = head->next;
count = 0;

if (head == NULL)
{
	exit(98);
}

while (post !=  NULL && post < pre)
{
count++;
printf("[%p] %d\n", (void *)pre, pre->n);
pre = pre->next;
post = post->next;
}

printf("[%p] %d\n", (void *)pre, pre->n);
count++;
if (post != NULL)
	printf("-> [%p] %i\n", (void *)post, post->n);
return (count);
}
