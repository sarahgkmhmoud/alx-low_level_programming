#include<stdio.h>
#include <string.h>
#include<stdlib.h>
/**
 *main - descripe the main function
 *@argc : decript the count
 *@argv : desribe the array
 *Return: 0 always success and 1 Failure
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	int digit = 0;

	sum = 0;
	i = 1;
	if (argc > 1)
	{
	while (i < argc && digit == 0)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (argv[i][j] >= '0' && argv[i][j] <= '9')
	{
		digit = 0;
	}
				else
				{
					digit = 1;
					break;
				}
			}
		if (digit == 0)
		{
			sum += atoi(argv[i]);
		}
		else
			break;
		i++;
	}
	}
	if (digit == 1)
{
	printf("Error\n");
	return (1);
}
	else if (digit == 0)
	printf("%d\n", sum);
	else
	printf("0\n");
	return (0);
}
