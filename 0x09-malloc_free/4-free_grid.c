/**
 * free_grid - function that frees 2-D grid previously
 * created by alloc_grid function. --> One malloc , one free.
 * @grid: integer
 * @height: integer
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void free_grid(int **grid, int height)
{
	if (height)
	free(grid);
}
