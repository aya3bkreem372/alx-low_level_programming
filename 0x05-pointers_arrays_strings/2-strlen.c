#include "main.h"
/**
* _strlen - is the function
*@s: is the paramter
*Return: the value od length
*/
int _strlen(char *s)
{
int x;
int z = 0;
for (x = 0; s[x] != '\0'; x++)
{
z++;
}
return (z);
}
