#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: a
 */
char *_strdup(char *str)
{
	int length = 0;
	char *temp;
	char *copy;
	int i;


	if (str == NULL)
		return (NULL);

	temp = str;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}

	copy = (char *)malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	temp = str;
	for (i = 0; i < length; i++)
	{
		copy[i] = *temp;
		temp++;
	}
	copy[length] = '\0';

	return (copy);
}
