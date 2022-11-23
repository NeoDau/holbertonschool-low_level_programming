#include "lists.h"
/**
 *free_dlistint - function free list element
 *@head: elements to free
 *Return: nathings
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	for (; head != NULL; head = head->next)
	{
		ptr = head;

		free(ptr);
	}
}
