#include "main.h"
/*function that frees a 2 dimensional grid previously*/
/*created by your alloc_grid function.*/
/**
 * free_grid - function
 * @grid: first parameter
 * @height: second parameter
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
