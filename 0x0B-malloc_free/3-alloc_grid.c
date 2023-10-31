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
	int **arr, a, b;

	arr = malloc(height * sizeof(*arr));

	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	else
	{
		a = 0;
		while (a < height)
		{
			arr[a] = malloc(width * sizeof(**arr));
			if (arr[a] == 0)
			{
				while (a--)
					free(arr[a]);
				free(arr);
				return (NULL);
				
			}


				for (b = 0; b < width; b++)
				arr[a][b] = 0;
			a++;
		}
	}
	return (arr);
}
