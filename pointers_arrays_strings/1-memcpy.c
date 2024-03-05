#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;

	while (n > 0)
	{
		*ptr_dest = *src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (dest);
}
