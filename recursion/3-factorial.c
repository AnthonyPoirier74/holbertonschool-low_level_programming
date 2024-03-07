#include "main.h"
/**
 * factorial - Computes the factorial of a given number
 * @n: The number to compute the factorial of
 *
 * Description: This function computes the factorial of a non-negative integer
 * 'n' using recursion. The factorial of n (denoted as n!) is the product of
 * all positive integers less than or equal to 'n'.
 *
 * Return: The factorial of 'n'. If 'n' is negative, returns -1.
 *         If 'n' is 0, returns 1 (0! = 1).
 **/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
