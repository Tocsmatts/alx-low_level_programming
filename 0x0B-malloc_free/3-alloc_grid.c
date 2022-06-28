#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates grid
 * @width: width of grid
 * @height: height of grid
 * Return: Rturn int on success
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **output;

	if (width < 1 || height < 1)
		return (NULL);

	output = malloc(height * sizeof(int *));
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		output[a] = malloc(width * sizeof(int));
		if (output[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(output[a]);
			free(output);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			output[a][b] = 0;

	return (output);
}
