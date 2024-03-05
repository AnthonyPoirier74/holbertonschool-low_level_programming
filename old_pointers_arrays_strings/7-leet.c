#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337 (leet) speak.
 * @s: The string to be encoded.
 *
 * Return: The pointer to the encoded string.
 */
char *leet(char *s)
{
	char original[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char *temp = s;
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == original[i])
			{
				*s = leet[i];
				break;
			}
		}
		s++;
	}

	return (temp);
}
