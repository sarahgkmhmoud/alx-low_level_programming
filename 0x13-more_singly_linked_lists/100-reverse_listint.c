#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*reverse_listint - delet node
*@head:pointer to point to headpointer
*Return: (*head) always success
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;

	prev = NULL;

if (head == NULL || *head == NULL)
{
	return (NULL);
}

while (*head != NULL)
{
	curr = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = curr;
}
	*head = prev;
return (*head);
}
