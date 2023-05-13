#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include <limits.h>
int mincoin(int coin[], int m, int v);
/**
 *main - descripe the main function
 *@argc : decript the count
 *@argv : desribe the array
 *Return: 0 always success and 1 Failure
 */
int main(int argc, char *argv[])
{
	int cent;
	int chang;
	int coin[5] = {25, 10, 5, 2, 1};

	cent = atoi(argv[argc - 1]);
	if (argc == 1)
{
	printf("Error\n");
		return (1);
}
	if (cent < 0)
{
	printf("0\n");
	return (0);
}
	chang = mincoin(coin, 5, cent);
	printf("%d\n", chang);
	return (0);
}


/*
 * mincoin - Describe the main coin
 *@coin[] - describe the given coin
 *@m - desctibe the number of coins
 *@v - describe the value
 *Return : table[v] always sucess
 */
int mincoin(int coin[], int  m, int v)
{

int table[v + 1];
int i, j;
int remain;

table[0] = 0;

for (i = 1; i <= v; i++)
table[i] = INT_MAX;

	for (i = 1; i <= v; i++)
	{
		for (j = 0; j < m; j++)
		if (coin[j] <= i)
	{
		remain = table[i - coin[j]];
		if (remain != INT_MAX && (remain + 1) < table [i])
		table[i] = remain + 1;
	}
	}
	return (table[v]);
}

