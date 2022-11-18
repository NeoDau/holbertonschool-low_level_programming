#include "lists.h"
/**
 *free_listint2 - function free list
 *@head: pointer to list
 *Return: ...
 */
void free_listint2(listint_t **head)
{
	listiint_t *a, *b;

	if (!a)
	{
		return;
	}
	b = *head;
	while (a != NULL)
	{
		a = b;
		b = b->next;
		free(b);
	}
	*head = NULL;
}
