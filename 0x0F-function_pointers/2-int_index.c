#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array with data
 * @size: size of the array
 * @cmp: function pointer
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (count = 0; count< size; count++)
	{
		if (cmp(array[count]) == 1)
		return (count);
	}

	return (-1);
}
