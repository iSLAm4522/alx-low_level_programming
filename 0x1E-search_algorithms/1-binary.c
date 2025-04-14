#include "search_algos.h"

/**
* print_array - prints an array of integers
* @array: pointer to the first element of the array to print
* @size: number of elements in the array
*
* Return: void
*/
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
* binary_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for
*
* Return: index where value is located, or -1 if not found or NULL
*/
int binary_search(int *array, size_t size, int value)
{

	size_t left, right, mid, index = -1;

	if (array == NULL)
		return (-1);

	left = 0, right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_array(&array[left], right - left + 1);
		if (value == array[mid])
		{
			index = mid;
			return (index);
		}
		else if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (index);
}
