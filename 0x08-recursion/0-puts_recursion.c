#include <stdio.h>
#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new file
 *@s: pointers to the string
 *Return: void
 */
char on = 'c';

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
