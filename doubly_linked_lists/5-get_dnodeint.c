#include "lists.h"
/**
 *get_dnodeint_at_index - function gets node at especificated indes
 *@head: head of the double linked list
 *@index: index in to the node
 *Return: node specific
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (!head)
	{
		return (0);
	}
	for (; head != NULL; head = head->next)
	{
		if (a == index)
		{
			return (head);
		}
		a++;
	}
	return (head);
}
