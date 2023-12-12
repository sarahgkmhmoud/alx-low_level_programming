#include "search_algos.h"
#include <math.h>
int rec_interpolation_search(int *array, int lo, int h, int value);
/**
 *interpolation_search - jump search
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value:  the value to search for
 *Return: i alway success
 */
int interpolation_search(int *array, size_t size, int value)
{
	int lo, h, index;

	if (!array)
		return (-1);
	lo = 0;
	h = size - 1;
	index = rec_interpolation_search(array, lo, h, value);

	return (index);
}

/**
 *rec_interpolation_search - interpolation
 *@array: pointer to the first element of the array to search in
 *@lo: the number of elements in array
 *@h: the number of elements in array
 *@value:  the value to search for
 *Return: i alway success
 */
int rec_interpolation_search(int *array, int lo, int h, int value)
{
	size_t pos;

	pos = lo + (((double)(h - lo) / (array[h] - array[lo]))
	* (value - array[lo]));
	if (lo <= h && value >= array[lo] && value <= array[h])
	{

		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[(int)pos] == value)
			return (pos);
		if (array[pos] < value)
			return (rec_interpolation_search(array, pos + 1, h, value));

		if (array[pos] > value)
			return (rec_interpolation_search(array, lo, pos - 1, value));
	}
	else
		printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
