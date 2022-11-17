#include "lists.h"
/**
 *listint_len - function that return number of elements
 *@h: list element
 *Return: total elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	for (; h != NULL; h = h->next)
	{
		a++;
	}
	return (a);
}
