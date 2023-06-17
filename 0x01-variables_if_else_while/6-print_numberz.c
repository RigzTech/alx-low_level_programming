#include <stdio.h>
/**
 * Description: main - printing intergers to base 10
 * Return: 0 (success)
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
