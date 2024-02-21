#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints the alphabet in lower case, followed by a line feed.
*
*
* Return: Always 0.
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
		putchar(alphabet);
}

	putchar('\n');
	return (0);
}
