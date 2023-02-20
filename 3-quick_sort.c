#include "sort.h"
/**
 * partition - function to split the array to smaller pieces
 * @array: the array to sort
 * @low_ind: lower index of split array
 * @high_ind: higher index of split array
 * @size: size of the full array
 * Return: none
*/
int partition(int *array, int low_ind, int high_ind, size_t size)
{
	int i, j, pivot_elem, temp;

	pivot_elem = array[high_ind];
	i = (low_ind - 1);
	for (j = low_ind; j < high_ind; j++)
	{
		if (array[j] <= pivot_elem)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (pivot_element < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = array[high_index];
		array[high_index] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quickSort - function to sort an array using the quick sort algorithm
 * @array: array to sort
 * @low_ind: lower index of split array
 * @high_ind: higher index of split array
 * @size: size of array
 * Return: none
*/
void quickSort(int *array, int low_ind, int high_ind, size_t size)
{
	int pivot;

	if (low_ind < high_ind)
	{
		pivot = partition(array, low_ind, high_ind, size);
		quickSort(array, low_ind, pivot - 1, size);
		quickSort(array, pivot + 1, high_ind, size);
	}
}

/**
 * quick_sort - function to parse the array and pass it\
 * to another sorting function
 * @array: array to be sorted
 * @size: size of array
 * Return: none
*/
void quick_sort(int *array, size_t size)
{
	int low_ind, high_ind;

	low_ind = 0;
	high_ind = size - 1;
	if (size < 2 || array == NULL)
		return;
	quickSort(array, low_ind, high_ind, size);
}
