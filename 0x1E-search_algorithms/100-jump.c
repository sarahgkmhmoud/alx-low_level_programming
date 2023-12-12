#include "search_algos.h"
#include <math.h>

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
		int jump = sqrt((int)size), prev = 0, i;

		while (array[jump] < value && prev < (int)size)
		{
			printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

			prev = jump;
			jump += sqrt(size);
			if (jump > (int)size)
				break;
		}
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

		printf("Value found between indexes [%i] and [%i]\n", prev, jump);
		if (jump > (int)size - 1)
			jump = size - 1;
		for (i = prev; i <= jump; i++)
		{
			printf("Value checked array[%i] = [%i]\n", i, array[i]);
				if (array[i] == value)
					return (i);
		}
	}
	return (-1);
}
