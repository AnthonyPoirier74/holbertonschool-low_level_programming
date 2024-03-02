#include "main.h"

/**
 * _strcpy - Copies a string.
 * @dest: Destination buffer
 * @src: Source string to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
