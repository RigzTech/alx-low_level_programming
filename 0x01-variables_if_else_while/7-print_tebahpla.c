#include <stdio.h>
/**
 * Description: main - alphabets in reverse
 * Return: 0 (sussess)
*/
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
