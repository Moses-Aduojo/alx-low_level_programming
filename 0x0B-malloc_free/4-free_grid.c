#include "main.h"
/**
 * free_grid - free any previous memeroy allocated by alloc_grid
 * function
 * @grid: pointer to the memory to be free
 * @height: number of element in each array in grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
