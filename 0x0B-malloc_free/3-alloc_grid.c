#include "main.h"
/**
 * wid - helps out alloc_grid
 * @width: width of 2D array
 * Return: returns address of each array
 */
int *wid(int width)
{
	int *new;
	int i;

	new = malloc(width * sizeof(int));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		new[i] = 0;
	return (new);
}
/**
 * alloc_grid - returns address of 2D array
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: address of 2D array
 */
int **alloc_grid(int width, int height)
{
	int i;
	/*int *n;*/
	int **p;

	if (width < 1 || height < 1)
		return (NULL);
	p = malloc(width * height * sizeof(int));
	if (p == NULL)
		return (NULL);
	/**
	 * n = wid(width);
	*if (n == NULL)
	*{
	*	free(n);
	*	return (NULL);
	*}
	*/
	for (i = 0; i < height; i++)
		p[i] = wid(width);
	return (p);
}
