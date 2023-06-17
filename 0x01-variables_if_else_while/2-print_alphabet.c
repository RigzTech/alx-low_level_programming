#include <stdio.h>
/**
 * Description: main - print lowercase alphabets
 * Return: 0 when success
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
