#include "main.h"
/**
* _puts - is the function
* @str: is the parameter
*Return: void
*/
void _puts(char *str)
{
int y;
for (y = 0; str[y] != '\0'; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
