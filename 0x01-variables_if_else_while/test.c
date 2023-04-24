#include <stdio.h>

int main(void)
{
    int x = 0;
    int i;
    while (x < 100)
    {
	    
	i = 48;
	while (i <= 57)
{
	if ('i' != (x/10))
	{
	putchar((x/10)+'0');
	putchar((x%10)+'0');
	putchar(i);
	i++;
	if (x < 99)
        {
            putchar(',');
            putchar(' ');
        }
	}
	else
	i++;
}
        x++;
    }
    putchar('\n');

    return (0);
}

