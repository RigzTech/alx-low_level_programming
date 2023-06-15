#include<stdio.h>
/**
 * Description main - Entry point
 *Return: 0 when success
*/
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a floa: %d byte(s)n", sizeof(float));
	return (0);
}
