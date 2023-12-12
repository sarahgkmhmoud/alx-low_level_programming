#include "search_algos.h"
#include <math.h>
size_t find_min(size_t a, size_t b);
/**
 *find_min - find min
 *@a: a
 *@b: b
 *Return: int
*/
size_t find_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
/**
 *jump_search - jump search
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value:  the value to search for
 *Return: i alway success
*/
int jump_search(int *array, size_t size, int value)
{
	if (array)
	{
	size_t jump, prev;

	prev = 0;
	jump = sqrt(size);
	while (array[find_min(jump, size)] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);

		prev = jump;
		jump += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		return (prev);
	}
	}
	return (-1);
}
