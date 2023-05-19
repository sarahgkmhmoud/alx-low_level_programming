#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *main - Entry point
 *Description:'the program's description'
 *@argc: integer
 *@argv: char v
 *Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, j;
	int mul = 1;

	if (argc != 3)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				}
				else
				{
					printf("Error\n");
					break;
				}
			}
		}
		mul = atoi(*argv);
	for (i = 1; i < argc; i++)
	{
		mul = mul * *argv[i];
	}
	}
	return (0);
}

