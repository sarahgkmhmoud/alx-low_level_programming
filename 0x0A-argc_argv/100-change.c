#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include <limits.h>
int mincoin(int coin[], int m, long v);
/**
 *main - descripe the main function
 *@argc : decript the count
 *@argv : desribe the array
 *Return: 0 always success and 1 Failure
 */
int main(int argc, char *argv[])
{
	long cent;
	int chang;
	int coin[5] = {25, 10, 5, 2, 1};

	cent = atoi(argv[argc - 1]);
	if (argc == 1)
{
	printf("Error\n");
		return (1);
}

	chang = mincoin(coin, 5, cent);
	printf("%d\n", chang);
	return (0);
}


/**
 *mincoin - Describe the main coin
 *@coin: describe the given coin
 *@m: desctibe the number of coins
 *@v: describe the value
 *Return: (counter) always sucess
 */
int mincoin(int coin[], int  m, long v)
{
int i;
int counter;

counter = INT_MAX;
if (v <= 0)
	return (0);
for (i = 0; i < m; i++)
{
	if (coin[i] <= v)
	{
	if ((mincoin(coin, m, v - coin[i])) != INT_MAX && 1 + (mincoin(coin, m, v - coin[i])) < counter)
	counter = 1 + (mincoin(coin, m, v - coin[i]));
	break;
	}
}
return (counter);
}
