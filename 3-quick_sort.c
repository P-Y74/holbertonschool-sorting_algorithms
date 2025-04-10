#include "sort.h"

/**
 * swap - Swaps two elements in an array
 * @arr: The array
 * @i: Index of the first element
 * @j: Index of the second element
 */
void swap(int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * lomuto - Partitions an array using the Lomuto partition scheme
 * @array: The array to be partitioned
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * Return: The final position of the pivot
 */
int lomuto(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(array, i + 1, high);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_rec - Recursively sorts an array using Quick sort
 * @array: The array to be sorted
 * @low: The starting index of the subarray
 * @high: The ending index of the subarray
 */
void quick_sort_rec(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto(array, low, high, size);
		quick_sort_rec(array, low, pivot_index - 1, size);
		quick_sort_rec(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}
