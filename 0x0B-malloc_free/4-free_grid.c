#include "main.h"
/**
 * alloc_grid - alloc a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: grid of integer.
 */ 

void free_grid(int **grid, int height)
{
    int h;

    h = 0;
    while (h < height)
    {
		free(grid[h]);
        h++;
    }
	free(grid);
}
