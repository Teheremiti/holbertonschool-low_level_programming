#include "search_algos.h"


/**
 * printArray - Print a specific portion of an array
 *
 * @array: Array to print
 * @left: Leftmost index to print the value of
 * @right: Rightmost index to print the value of
 */

void printArray(int *array, int left, int right)
{
	int i;
	char *sep = "";

	for (i = left; i <= right; i++)
	{
		printf("%s%d", sep, array[i]);
		sep = ", ";
	}
	putchar('\n');
}


/**
 * binary_search - Search for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to look for
 *
 * Return: The index of the value in the array, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1;
	int middle;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			printArray(array, left, right);

			middle = (left + right) / 2;
			if (array[middle] < value)
				left = middle + 1;

			else if (array[middle] > value)
				right = middle - 1;

			else
				return (middle);
		}
	}

	return (-1);
}
