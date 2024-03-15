#include "main.h"
/**
 * malloc_checked - a
 * @b: a
 *
 * Return: a
 *
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
