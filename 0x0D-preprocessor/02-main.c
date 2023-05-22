#include <stdio.h>
/**
 *main : Entry point
 *Description:  prints the name of the file it was compiled from
 *Return: 0 aways suceess
 *
 *
 */
int main ()
{
	printf("%s\n", __FILE__);
	return (0);
}
