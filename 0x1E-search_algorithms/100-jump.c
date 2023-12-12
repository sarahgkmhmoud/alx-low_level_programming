#include "search_algos.h"
#include <math.h>
int find_min(int a, int b);
/**
 *find_min - find min
 *@a: a
 *@b: b
 *Return: int
*/
int find_min(int a, int b)
{
	if (b > a)
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
	if (array && size)
	{
	int jump, prev;

	prev = 0;
	jump = sqrt((int)size);
	while (array[find_min(jump, size)] < value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

		prev = jump;
		jump += sqrt(size);
		if (prev >= (int)size)
			return -1;
	}
	printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

	printf("Value found between indexes [%i] and [%i]\n", prev, jump);

	while (array[prev] < value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		return (prev);
	}
	}
	return (-1);
}
