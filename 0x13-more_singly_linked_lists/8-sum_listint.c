#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*sum_listint - delet node
*@head:pointer to point to headpointer
*Return: head always success
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
if (head == NULL)
	return (0);

while (head != NULL)
{
	sum += head->n;
	head = head->next;
}


return (sum);
}

