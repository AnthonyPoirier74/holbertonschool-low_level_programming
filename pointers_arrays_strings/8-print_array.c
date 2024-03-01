#include "main.h"
#include <stdio.h>
/**
* print_array - a
*
*@a : a
*@n : a
*/

void print_array(int *a, int n)
{
	int b;

	if (n <= 0 || a == NULL)
	{
		return;
	}
	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
