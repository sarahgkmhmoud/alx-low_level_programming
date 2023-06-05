#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*free_listint2 - free node
*@head:pointer to point to headpointer
*Descrption: print the data
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *cur = *head;
	while (cur !=  NULL)
{

	tmp = cur;
	cur= cur->next;
	free(tmp);
}
*head = NULL;
}
