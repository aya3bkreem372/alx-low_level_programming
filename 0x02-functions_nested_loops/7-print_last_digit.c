#include "main.h"
/**
* print_last_digit - is the function
* @y: parameter
* Return: the value of last digit
*/
int print_last_digit(int y)
{
int z = y % 10;

if (z < 0)
{
z *= -1;
}
_putchar(z + '0');
return (z);
}
