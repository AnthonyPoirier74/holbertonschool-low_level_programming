#include "main.h"
/**
 * _strncpy - Copies a string up to a certain number of characters.
 * @dest: The destination buffer where the string will be copied to.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (start);
}
