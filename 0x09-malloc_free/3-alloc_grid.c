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
	int i, j, **arr, len, *ptr;

	len = 0;

	if ((width <= 0) || (height <= 0))
	{
		arr = (int **)malloc(sizeof(int *) * 0);
		free(*arr);
		return (NULL);
	}
	else
	{
		len = sizeof(int *) * height + sizeof(int) * (width * height);
		arr = (int **)malloc(len);

		ptr = (int *)(arr + height);

		for (i = 0; i < height; i++)
		{
			arr[i] = (ptr + width * i);
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
