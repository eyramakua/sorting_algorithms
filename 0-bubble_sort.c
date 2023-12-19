#include "sort.h"

/**
 * bubble_sort - function that uses Bubbble to sorts an array of integers
 * @array: array of numbers to sort
 * @size: size of array
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	int hemp, tep;
	size_t k;

	tep = 1;
	if (array == NULL || size < 2)
		return;
	while (tep != 0)
	{
		tep = 0;
		for (k = 0; k < size - 1; k++)
			if (array[k] > array[k + 1])
			{
				hemp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = hemp;
				tep = 1;
				print_array(array, size);
			}
	}
}
