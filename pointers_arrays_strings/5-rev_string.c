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

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (; i <= len / 2; i++)
	{
		firstChar = s[i];
		s[i] = s[len - i];
		s[len - i] = firstChar;
	}
}
