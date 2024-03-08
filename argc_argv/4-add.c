#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, num;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num > 0)
		{
			result += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
