#include "main.h"

/**
* print_alphabet_x10 - is the function that print alphabet
*
* Return: void
*/
void print_alphabet_x10(void)
{
char x, z;

for (x = 1; x <= 10; x++)
{
for (z = 'a'; z <= 'z'; z++)
{
_putchar(z);
}
_putchar('\n');
}
}
