#include "search_algos.h"
#include <math.h>
int rec_binary_search(int *array, int index, int step, int value);
int min(int a, int b);
void print_binary_search(int *array, size_t start, size_t end);

/**
 *min - find minmum
 *@a: a
 *@b: b
 *Rerturn: i 
*/
int find_min(int a, int b)
{
    if(b>a)
      return a;
      else
      return b;
}
/**
 *exponential_search - jump search
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value:  the value to search for
 *Return: i alway success
 */
int exponential_search(int *array, size_t size, int value)
{

    int i;

    if (!array)
		return (-1);
    if (array[0] == value)
        return (0);
i = 1;
while (i < (int)size && array[i] <= value)
{
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    i = i * 2;
    }
    printf("Value found between indexes [%d] and [%d]\n", i/2, find_min(i, size - 1));

    return rec_binary_search(array, i/2, find_min(i, size - 1), value);
}
/**
 * 
 * 
 * 
 * 
 * 
*/
int rec_binary_search(int *array, int index, int step, int value)
{
int mid;
    if (step >= index)
    {
        print_binary_search(array, index, step);

        mid = index + (step - index) / 2;
        if (array[mid] == value)
        return (mid);

        if (array[mid] > value)
        return (rec_binary_search(array, index, mid - 1, value));

        return (rec_binary_search(array, mid + 1, step, value));

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
