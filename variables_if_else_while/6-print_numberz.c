#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	const char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(numbers[i]);
	}

	putchar('\n');

	return (0);
}
