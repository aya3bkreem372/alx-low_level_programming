#include<stdio.h>
/**
*main - is the main function
*
*Return: always zero
*/
int main(void)
{
	printf("Size of a char: %c bytes\n", sizeof(char));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long int: %lld bytes\n", sizeof(long long int));
	printf("Size of a float: %c bytes\n", sizeof(float));
	return (0);
}
