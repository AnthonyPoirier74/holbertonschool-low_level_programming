#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a
 * @s1: a
 * @s2: a
 *
 * Return: a
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;
	char *result;

	if (s1 == NULL || s2 == NULL)
		s1 = "", s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (; i < len1 ; i++)
		result[i] = s1[i];

	for (; j < len2 ; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
