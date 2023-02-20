#include "sort.h"
/**
 * selection_sort - function that sorts through an array using selection sort
 * @array: the array to be sorted
 * @size: size of the array
 * min: smallest element
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, tmp;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;
		print_array(array, size);
		}
	}
}
