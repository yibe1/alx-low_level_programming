#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free memory
 * @grid: pointer to grid
 * @height: int type
 * Return: clean memory
 */

void free_grid(int **grid, int height)
{
int y;
if (grid == NULL || grid == 0)
{
return;
}
for (y = 0; y < height;  y++)
{
free(grid[y]);
}
free(grid);
}
