#include <stdio.h>

/**
 * main - Print the alphabet in lowercase,
 *        except q and e,  followed by a newline.
 *        Only allowed to use putchar three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
