#include <stdio.h>
/*
 * main - Prints all single-digit base 10 numbers starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
		if (x < 9)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
