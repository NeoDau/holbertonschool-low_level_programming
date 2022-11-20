#include "lists.h"
/**
 *get_nodeint_at_index - function return mode of the linked list
 *@head: pointer to the head node
 *@index: index of the node
 * Return: data the node, NULL node dont exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	for (; head; head = head->next)
	{
		if (index == a)
		{
			return (head);
		}
		a++;
	}
	return (NULL);
}
