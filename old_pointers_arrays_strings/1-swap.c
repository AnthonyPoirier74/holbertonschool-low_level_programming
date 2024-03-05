#include "main.h"

/**
* swap_int - a
*
*@a : a
*@b : b
*/
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
