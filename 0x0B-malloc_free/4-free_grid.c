#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid of symbols
 * @height: length of array
 * Return: 0 (success) void pointer
*/
void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	
		free(grid[a]);
	free(grid);
	a++;
}
