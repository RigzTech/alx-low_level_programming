#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("The number is %d \n", n);
	}
	else if (n==0)
	{
		printf("The number is %d\n", n);
	}
	else
	{
		printf("The number is %d\n", n);
	}
	return (0)
}
