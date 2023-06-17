#include <stdio.h>
/**
 * Description: main - prints both upper and lowercase alphabets
 * Return: 0 (success)
*/
int main(void)
{
	int i = 97;
	int y = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
