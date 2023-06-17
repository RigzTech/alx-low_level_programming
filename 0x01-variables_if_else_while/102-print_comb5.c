#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main - Entry point
 * Return: 0 always
*/
int main(void)
{
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = m + 1; m <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
