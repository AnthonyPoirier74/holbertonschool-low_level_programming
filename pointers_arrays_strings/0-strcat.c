#include "main.h"
/**
 * _strcat - Concatenates two strings
 *
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	return (dest);
}
