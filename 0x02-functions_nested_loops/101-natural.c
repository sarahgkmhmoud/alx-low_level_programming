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
int x = 0;
int y = 0;
for (n = 1023; n >= 0; n--)
{
	if (n % 3 == 0)
	x = x + n;
	if (n % 5 == 0)
	y = y + n;
}
	sum = x + y;
	printf("%d\n", sum);
	return (0);
}
