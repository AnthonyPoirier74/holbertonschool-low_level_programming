#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
		str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
		|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
		str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
		str[i - 1] == '{' || str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
