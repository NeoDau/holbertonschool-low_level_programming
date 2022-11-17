#include "lists.h"
/**
 *free_listint - function free list
 *@head: list
 *Return: a
 */
void free_listint(listint_t *head)
{
	listint_t *a = head;

	for (; a != NULL; a = a->next)
	{
		free(a);
	}
}
