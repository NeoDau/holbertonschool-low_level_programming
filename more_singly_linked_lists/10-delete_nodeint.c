#include "lists.h"
/**
 * delete_nodeint_at_index - function delete nodo
 *@head: list of the nodo
 *@index: head of node
 *Return: 1 succes, -1 error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *a;
	unsigned int b = 0;

	if (tmp && (index == 0))
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (; tmp; tmp = tmp->next)
	{
		if (b + 1 == index)
		{
			a = tmp->next;
			if (a)
			{
				tmp->next = a->next;
				free(a);
				return (1);
			}
		}
		b++;
	}
	return (-1);
}
