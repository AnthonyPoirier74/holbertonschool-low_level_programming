#include "main.h"

/**
* print_sign - Function that prints the sign of a number.
* @n: The number to be checked
*
* Return: Returns 1 if n is greater than zero,
*         0 if n is zero,
*         -1 if n is less than zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
	return (-1);
	}
}
