#include "function_pointers.h"
/**
 *int_index - function integer
 *@array: pointer array
 *@size: element in array
 *@cmp: pointer to de function to be  used compare value
 *Return: first element index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
