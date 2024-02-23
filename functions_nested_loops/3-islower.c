#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @c: The character to be checked.
 *
 * Returns: 1 if c is lowercase,
 *          returns 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
