#include<stdio.h>
#include<stdlib.h>
/**
 *main - descripe the main function
 *@argc : decript the count
 *@argv : desribe the array
 *Return: 0 always success
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);

	printf("%d\n", number1 * number2);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
