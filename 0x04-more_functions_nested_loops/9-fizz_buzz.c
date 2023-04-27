#include<stdio.h>
/**
 * main - Entry point
 * Description: 'the program's printing'
 * @void: describe the parameter
 * Return: Always 0 (Success)*
 */
int main(void)
{
int n;

for (n = 99; n >= 0; n--)
{
	if ((n % 3 == 0) && (n % 5 == 0))
	printf("FizzBuzz ");
	else if ((n % 3 == 0) && (n % 5 != 0))
	printf("Fizz ");
	else if ((n % 5 == 0) && (n % 3 != 0))
	printf("Buzz ");
	else
	printf("%d ", n);
}
	printf("\n");
	return (0);
}
