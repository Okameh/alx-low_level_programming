#include <stdio.h>
/**
 *  main - my next code
 *  Return: Always 0
 */
int main(void)
{
	printf("size of a char: %l byte(s)\n", sizeof(char));
	printf("size of an int: %l byte(s)\n", sizeof(int));
	printf("size of a long int: %l byte(s)\n", sizeof(long int));
	printf("size of long long int: %l byte(s)\n", sizeof(long long));
	printf("size of a float: %l byte(s)\n", sizeof(float));
	return (0);
}
