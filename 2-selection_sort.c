#include "sort.h"

/**
 * swap - Swaps two elements in an array
 * @arr: The array
 * @i: Index of the first element
 * @j: Index of the second element
 */
void swap(int *arr, int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection Sort algorithm.
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jMin;

	for (i = 0; i < size - 1; i++)
	{
		jMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}
		if (jMin != i)
		{
			swap(array, i, jMin);
			print_array(array, size);
		}
	}
}
