#include<stdio.h>
/**
 * Description: main - Entry point
 *Return: 0 when success
*/
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
