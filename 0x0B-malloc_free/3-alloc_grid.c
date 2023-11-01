#include "main.h"

/**
 * alloc_grid - allocate grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer ot the grid.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			k = 0;
			while (k < i)
			{
				free(a[k]);
				k++;
			}
			free(a);
			return (NULL);
		}

		k = 0;
		while (k < width)
		{
			a[i][k] = 0;
			k++;
		}

		i++;
	}

	return (a);
}
