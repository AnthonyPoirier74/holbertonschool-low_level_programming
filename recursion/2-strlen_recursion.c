#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: Pointer to the string to calculate its length
 *
 * Description: This function returns the length of the string pointed to by
 * 's' using recursion.
 *
 * Return: Length of the string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
