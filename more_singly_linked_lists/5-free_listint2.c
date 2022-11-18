#include "lists.h"
/**
 *free_listint2 - function free list
 *@head: pointer to list
 *Return: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *a, *b;

	if (!head)
	{
		return;
	}
	b = *head;
	while (b != NULL)
	{
		a = b;
		b = b->next;
		free(a);
	}
	*head = NULL;
}
