#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*pop_listint - delet node
*@head:pointer to point to headpointer
*Descrption: print the data
*Return: n always success
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;
if (head == NULL)
{
	return (0);
}
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;

return (n);
}
