#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to process
 *
 * Description: This function prints the second half of a string,
 * followed by a newline character.
 */
void puts_half(char *str)
{
	int n, mid, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		mid = length / 2;

		for (n = mid; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (length - 1) / 2;

		for (n = mid + 1; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
