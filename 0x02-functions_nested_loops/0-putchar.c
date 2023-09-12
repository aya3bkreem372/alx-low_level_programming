#include <unistd.h>
/**
* main - is the main function
*Return: always 0
*/
int main(void)
{
char str[] = "_putchar\n";
write(1, str, sizeof(str) - 1);
return (0);
}
