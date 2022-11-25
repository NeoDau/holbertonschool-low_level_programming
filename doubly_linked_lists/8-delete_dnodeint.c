#include "lists.h"
/**
 *dlistint_len - alternative function that returns the number of nodes
 *@h: pointer to de list
 *Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (!h)
	{
		return (0);
	}
	for (; h; h = h->next)
	{
		node++;
	}
	return (node);
}
/**
 *delete_dnodeint_at_index - deleete node in a dobly linked list
 *@head: double pointer to the list
 *@index: index of the node to delete
 *Return: 1success, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
		dlistint_t *ptr = *head;
		unsigned int a = 0;

		if (*head == NULL)
		{
			return (-1);
		}
		if (!index)
		{
			(*head) = ptr->next;
			if (ptr->next)
			{
				ptr->next->prev = NULL;
			}
			ptr->next = NULL;
			free(ptr);
			return (1);
		}
		for (; a < index; ptr = ptr->next)
		{
			a++;
		}
		ptr->prev->next = ptr->next;
		if (ptr->next)
		{
			ptr->next->prev = ptr->prev;
		}
		free(ptr);
		return (1);

}
