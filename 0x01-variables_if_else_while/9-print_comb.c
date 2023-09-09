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
if (a <= 8)
{
putchar(a + '0');
putchar(',');
putchar(' ');
}
else
{
putchar(a + '0');
}
}
return (0);
}
