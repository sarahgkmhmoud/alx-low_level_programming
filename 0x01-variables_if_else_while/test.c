#include <stdio.h>

int main(void)
{
    int x = 0;
    int y;
    while (x < 100)
    {
	    
	y = (x/10)*(x%10);
	putchar(y+'0');
        x++;
    }
    putchar('\n');

    return (0);
}

