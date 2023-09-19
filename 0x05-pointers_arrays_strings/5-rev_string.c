#include "main.h"
/**
* rev_string - is the function
* @s: parameter
* Return: void
*/
void rev_string(char *s)
{
int z;
int count = 0;

for (z = 0; s[z] != 0; z++)
{
count++;
}
for (z = 0; z < count / 2; z++)
{
char y;
y = s[z];
s[z] = s[count - 1 - z];
s[count - 1 - z] = y;
}
}
