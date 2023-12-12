#include "search_algos.h"
#include <math.h>
int rec_binary_search(int *array, int index, int step, int value);
void print_binary_search(int *array, size_t start, size_t end);
/**
 *advanced_binary - jump search
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value:  the value to search for
 *Return: i alway success
 */
int advanced_binary(int *array, size_t size, int value)
{
	int lo, hi;

	if (!array)
		return (-1);
	lo = 0;
	hi = size - 1;

	return (rec_binary_search(array, lo, hi, value));
}

/**
 *rec_binary_search - Recursion
 *@array: array
 *@index: index
 *@step: step
 *@value: value
 *Return: 1
 */
int rec_binary_search(int *array, int index, int step, int value)
{
	int mid;

	if (step >= index)
	{
		print_binary_search(array, index, step);

		mid = index + (step - index) / 2;
		if (array[mid - 1] == value)
			return (rec_binary_search(array, index, mid, value));

		if (array[mid] < value)
			return (rec_binary_search(array, mid + 1, step, value));

		if (array[mid] > value)
			return (rec_binary_search(array, index, mid, value));

		return (mid);
	}

	return (-1);
}
/**
 *print_binary_search - print the array
 *@array: array
 *@start: start
 *@end: end
 */
void print_binary_search(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start < end)
	{
		printf("%i, ", array[start]);
		start++;
	}
	printf("%i\n", array[end]);
}
