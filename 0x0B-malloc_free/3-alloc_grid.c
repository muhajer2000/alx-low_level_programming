#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function to print 2 dimensional array of integers
 * @width: width element of array
 * @height: hight element of array
 * Return: NULL if 0 or -1 otherwise NULL
*/
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(height * sizeof(*arr));

	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	else
	{
		i = 0;
		while (i < height)
		{
			arr[i] = malloc(width * sizeof(**arr));
			if (arr[i] == 0)
			{
				while (i--)
				{
					free(arr[i]);
				free(arr);
				return (NULL);
				}
			}


				for (j = 0; j < width; j++)
				arr[i][j] = 0;
			i++;
		}
	}
	return (arr);
}
