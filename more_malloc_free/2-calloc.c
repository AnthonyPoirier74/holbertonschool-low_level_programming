#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;
	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < ptr; i++)
		{
			ptr[i] = 0;
		}
	}
	return (ptr);
}
