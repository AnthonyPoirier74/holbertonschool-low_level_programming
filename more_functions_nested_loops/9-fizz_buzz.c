#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100.
 *              For multiples of 3, prints "Fizz".
 *              For multiples of 5, prints "Buzz".
 *              For multiples of both 3 and 5, prints "FizzBuzz".
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
		printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
		printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
		printf("Fizz ");
		}
		else
		{
		printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
