#include "main.h"
/**
 *alloc_grid - function 2 dimensional array
 *@width: int
 *@height: int
 *Return: di
 */
int **alloc_grid(int width, int height)
{
	int **di;
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	di = malloc(sizeof(int) * height);
	if (di == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		di[a] = malloc(sizeof(int) * width);
		if (di[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(di[a]);
			}
			free(di);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			di[a][b] = 0;
		}
	}
	return (di);
}
