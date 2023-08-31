#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @p: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int p, unsigned int index)
{
	unsigned int y;

	if (p == 0 && index < 64)
		return (0);

	for (y = 0; y <= 63; p >>= 1, y++)
	{
		if (index == y)
		{
			return (p & 1);
		}
	}

	return (-1);
}
