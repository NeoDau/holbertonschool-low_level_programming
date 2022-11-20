#include "lists.h"
/**
 *sum_listint - function return sum of the node
 *@head: head of list
 *Return: the sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	for (; head; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
