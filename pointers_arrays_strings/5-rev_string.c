#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char firstChar;
	char lastChar;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	printf("%s\n");

	for (; i <= len / 2; i++)
	{
		firstChar = s[i];
		lastChar = s[len - i];

		s[len - i] = firstChar;
		s[i] = lastChar;
	}

	printf("%s\n", s);
}
