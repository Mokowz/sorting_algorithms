#include "sort.h"

/**
 * swap_integers - Swap two integers in an array.
 * @num1: The first integer to swap.
 * @num2: The second integer to swap.
 */

void swap_integers(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 */

/* Time Complexity: O(n^2) */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_integers(array + i, min);
			print_array(array, size);
		}
	}
}
