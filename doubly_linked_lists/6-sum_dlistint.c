#include "lists.h"
/**
 *sum_dlistint - function that return sum of all data
 *@head: sum of elements
 *Return: sum all elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int a = 0;

	if (!head)
	{
		return (0);
	}
	for (; ptr; ptr = ptr->next)
	{
		a += ptr->n;
	}
	return (a);
}
