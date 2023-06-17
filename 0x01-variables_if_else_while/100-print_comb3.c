#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main - Entry point
 * Return: 0 always
*/
int main(void)
{
	int n;
	int m;

	for (n = '0'; n < '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			if (m != n)
			{
				putchar(n);
				putchar(m);
				if (n == '8' & m == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

