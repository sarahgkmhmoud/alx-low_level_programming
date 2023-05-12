#include<stdio.h>
int main(void)
{
int multi, x, z;
printf("enter mutli\n");
scanf("%d", &multi);
x = multi % 10;
z = multi / 10;
printf ("%d\n", x);
putchar((z % 10)+'0');
putchar('\n');
return (0);
}
