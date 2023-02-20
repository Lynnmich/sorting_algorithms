#include "sort.h"

/**
 * bubble_sort - function that uses bubble sort to sort an array
 * @array: array of numbers to sort
 * @size: size of array
 * Return: none
*/
void bubble_sort(int *array, size_t size)
{
	int temp, swap;
	size_t j;

	swap = 1;
	if (array == NULL || size < 2)
		return;
	while (swap != 0)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
	}
}
