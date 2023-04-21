#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * main: describe the main
 * Return: Always n (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if	(n > 0)
{
printf("%d is positive \n");
}
else if	(n == 0)
{
printf("%d is Zero \n");
}
else
{
printf("%d is negative \n");
}
return	(n);
}

