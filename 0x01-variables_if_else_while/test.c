#include <stdio.h>

int main(void)
{
    int x = 0;

    while (x < 100)
    {
	putchar((x/10)+'0');
	putchar((x%10)+'0');
        x++;
	putchar((x%10)+'0');
	if (x < 99)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');

    return (0);
}

