#include "main.h"
/**
 * _isalpha - Function that checks if a given
 *            character is an alphabetic letter.
 * @c: The character to be checked
 *
 * Return: Returns a nonzero value if the character is an alphabetic letter,
 *         0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
