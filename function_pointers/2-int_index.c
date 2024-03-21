#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array;
 * @array: Pointer to the array to search;
 * @size: Size of the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which the cmp function does not
 *		   return 0, -1 if no element matches or if size is less than 1,
 *		   or if array or cmp is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
