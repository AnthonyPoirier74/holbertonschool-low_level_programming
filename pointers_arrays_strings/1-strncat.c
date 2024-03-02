#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string to which src is concatenated.
 * @src: The source string that is concatenated to dest.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: Value of @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
