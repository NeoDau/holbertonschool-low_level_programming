#include "main.h"
/**
 *create_arary - function array of chars
 *@size: int
 *@c: char
 *Return: q
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *q;

	q = malloc(sizeof(char) * size);
	if (size == 0 || q != NULL)
	{
		for (a = 0; a < size; a++)
		{
			q[a] = c;
		}
		return (q);
	}
	else
	{
		return (NULL);
	}
}
