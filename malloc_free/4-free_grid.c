#include "main.h"
/**
 *free_grid - function
 *@grid: pointer array
 *@height: number row
 *Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
