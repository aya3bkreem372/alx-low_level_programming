#include <stdio.h>
/**
* main - is the main function
*
*Return: always 0
*/
int main(void)
{
int x, y;

for (x = 0; x <= 8; x++)
{
for (y = x + 1; y < 10; y++)
{
putchar(x + '0');
putchar(y + '0');
if (x < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
