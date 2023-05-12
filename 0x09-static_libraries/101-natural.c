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
int sum;
for (n = 1023; n >= 0; n--)
{
	if ((n % 3 == 0) || (n % 5 == 0))
	sum = sum + n;
}
	printf("%d\n", sum);
	return (0);
}
