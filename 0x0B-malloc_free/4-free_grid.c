#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory to grid
 * @grid: memory to grid
 * @height: row pointer
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
