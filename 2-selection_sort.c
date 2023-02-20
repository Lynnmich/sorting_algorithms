#include "sort.h"
/**
 * selection_sort - function that sorts through an array using selection sort
 * @array: the array to be sorted
 * min: the smallest element
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < arr[min])
				min = j;
		if (min != i)
		{
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;
		print_array(array, size);
		}
	}
}
