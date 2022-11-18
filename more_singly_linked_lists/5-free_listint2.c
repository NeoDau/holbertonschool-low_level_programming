#include "lists.h"
/**
 *free_listint2 - function free list
 *@head: .
 *Return: Always 0;
 */
void free_listint2(listint_t **head)
{
	listint_t *a = *head;

	if (!a)
	{
		return;
	}
	while (a != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
}
