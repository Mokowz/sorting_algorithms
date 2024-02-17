#include "sort.h"

/**
 * swap_integers - Swap two ins of the array
 * @num1: The first integer
 * @num2: The second integer
 */

void swap_integers(int *num1, int *num2)
{
	int final;

	final = *num1;
	*num1 = *num2;
	*num2 = final;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 */

/* Time Complexity: O(n^2) */
void bubble_sort(int *array, size_t size)
{
	size_t t, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (t = 0; t < len - 1; t++)
		{
			if (array[t] > array[t + 1])
			{
				swap_integers(array + t, array + t + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len--;
	}
}
