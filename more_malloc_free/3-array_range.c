#include "main.h"
/**
 * array_range - a
 * @min: a
 * @max: a
 *
 * Return: a
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	array[i] = min++;

	return (array);
}
