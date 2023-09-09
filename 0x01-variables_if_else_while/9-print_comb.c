#include<stdio.h>
/**
*main - is the main function
*
*Return: always zero
*/
int main(void)
{
int a;

for (a = 0 ; a < 10 ; a++)
{
putchar(a + '0');
if (a <= 8)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
