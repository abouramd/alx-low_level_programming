#include "main.h"
/**
 * alloc_grid - alloc a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: grid of integer.
 */ 

int **alloc_grid(int width, int height)
{
	int **ptr;
	int w;
    int h;

    h = 0;
	ptr = malloc (sizeof(int *) * height);
	if (!ptr)
		return (NULL);
    while (h < height)
    {
		ptr = malloc (sizeof(int) * width);
        if (!ptr)
			return (NULL);
		w = 0;
        while (w < width)
        {
			ptr[h][w] = 0;
        	w++;
        }
        h++;
    }
	return (ptr);
}
