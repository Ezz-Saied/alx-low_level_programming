#include "main.h"
#include <stdlib.h>
/**
* free_grid - free space in the heap memory
* @grid: first operand
* @height: second
*
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
