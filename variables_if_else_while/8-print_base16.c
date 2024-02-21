#include <stdio.h>
/**
* main - Prints all the numbers of base 16 in lowercase,
* followed by a new line.
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	int num;

	char alpha;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
