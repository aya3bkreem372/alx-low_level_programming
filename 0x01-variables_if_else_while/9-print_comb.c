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
putchar(',');
putchar(' ');
}
return (0);
}
