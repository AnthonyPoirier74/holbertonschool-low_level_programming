#include "main.h"
/**
 * _strchr - Locates a character in a string.
 *
 * @s: Pointer to the string to search in.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			return (s + len);
		}
		s++;
	}
	return ('\0');
}
