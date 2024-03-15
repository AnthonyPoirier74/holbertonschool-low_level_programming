#include "main.h"
/**
 * _calloc - a
 *@nmemb: a
 *@size: a
 *
 * Return: a
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total_size;

	if (size == 0 || nmemb == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		for (i = 0; i < total_size; i++)
		{
			ptr[i] = 0;
		}
	}
	return (ptr);
}
