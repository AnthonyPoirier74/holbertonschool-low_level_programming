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
	char *convers = s;

	while (*convers)
	{
		if (*convers == 'a' || *convers == 'A')
		{
			*convers = '4';
		}
		else if (*convers == 'e' || *convers == 'E')
		{
			*convers = '3';
		}
		else if (*convers == 'o' || *convers == 'O')
		{
			*convers = '0';
		}
		else if (*convers == 't' || *convers == 'T')
		{
			*convers = '7';
		}
		else if (*convers == 'l' || *convers == 'L')
		{
			*convers = '1';
		}
		convers++;
	}
	return (s);
}
