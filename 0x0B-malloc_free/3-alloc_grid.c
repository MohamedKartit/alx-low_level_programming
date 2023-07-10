#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to a 2 dimensional array of integers (Success)
 * NULL (Error)
 *
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			j = 0;
			free(arr);
			while (i >= j)
			{
				free(arr[j]);
				j++;
			}
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
