#include "main.h"
/**
* print_rev - is the function
* @s: is the parameter
* Return: void
*/
void print_rev(char *s)
{
int z;
int count = 0;
for (z = 0; s[z] != '\0'; z++)
{
count++;
}
for (z = count - 1; z >= 0; z--)
{
_putchar(s[z]);
}
_putchar('\n');
}
