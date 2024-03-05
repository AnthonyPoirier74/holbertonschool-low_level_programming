#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a
 *
 *@a : a
 *@n : a
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
