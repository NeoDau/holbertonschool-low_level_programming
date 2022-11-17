#include "lists.h"
/**
 *free_listint - function free list
 *@head: list
 *Return: a
 */
void free_listint(listint_t *head)
{
	listint_t *a = head;

	while (a != NULL)
	{
		listint_t *b = a;

		a = a->next;
		free(b);
	}
}
