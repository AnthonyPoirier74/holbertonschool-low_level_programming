#include <stdio.h>
/**
 * main - Print the alphabet in lower case,
 * then in uppercase, each followed by a new line.
 * Only allowed to use putchar three times.
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
