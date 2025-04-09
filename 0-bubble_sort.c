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
 * bubble_sort - Sorts an array of integers using Bubble sort
 * @array: The array to sort
 * @size: Size of the array
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
