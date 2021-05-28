/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of int.
 * @width: integer
 * @height: integer
 * Return: array
 * Auth: Zivile V. Silveira
 */

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int i, j, **arr;


	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	arr = (int **)malloc(sizeof(int *) *  height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = (int *)malloc(sizeof(int) * width);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
		return (arr);
	}
}
