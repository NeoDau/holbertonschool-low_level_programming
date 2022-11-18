#include "lists.h"
/**
 *pop_listint - function delet the firt node
 *head: yhe list node
 *Return: i
 */
int pop_listint(listint_t **head)
{
	listint_t *a = *head;
	int i;

	if (!head)
	{
		return (0);
	}
	i = a->n;
	*head = a->next;

	free(a);
	return (i);
}
