#include "search_algos.h"
void print_binary_search(int *array, size_t start, size_t end);
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

/**
 *binary_search - function that searches for a value in an array of integers
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value:  the value to search for
 *Return: i alway success
*/
int binary_search(int *array, size_t size, int value)
{
if (array)
{
	size_t start, end, mid;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		mid = start + ((end - start) / 2);
		print_binary_search(array, start, end);
		if (array[mid] == value)
		return (mid);
		else if (array[mid] > value)
		end = mid - 1;
		else if (array[mid] < value)
		start = mid + 1;
	}

}
return (-1);
}
