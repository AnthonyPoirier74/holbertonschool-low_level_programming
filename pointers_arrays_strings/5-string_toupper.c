#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}
