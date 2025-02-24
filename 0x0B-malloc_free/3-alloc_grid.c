#include "main.h"

/**
 * alloc_grid - creates a 2D array an initialises every index to 0.
 * @width: number of columns in the array.
 * @height: number of rows.
 *
 * Return: NULL if fail, pointer to an array of pointers.
 */
int **alloc_grid(int width, int height)
{
	int i, h, w, **grd;

	if (width < 1 || height < 1)
		return (NULL);
	/**
	 * Adds slots of pointer size to the 1st degree pointer.
	 * This means all the slots now become pointers.
	 */
	grd = malloc(sizeof(*grd) * height);
	if (grd == NULL)
		return (NULL);

	/*Adds slots of int size to the previously created pointers*/
	for (h = 0; h < height; h++)
	{
		grd[h] = malloc(sizeof(**grd) * width);
		if (grd[h] == NULL)
		{
			for (i = 0; i < h; i++)
				free(grd[i]);

			free(grd);
			return (NULL);
		}
	}

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grd[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grd);
}
