#include "main.h"

/**
* print_triangle - Prints a triangle of '#' characters.
* @size: The size of the triangle to be printed.
*
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= size - a)
			{
				_putchar(' ');
			}
			else if (b > 0)
			{
			_putchar('#');
			}
		}
	_putchar('\n');
	}
}
