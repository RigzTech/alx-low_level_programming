#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @p: number one.
 * @a: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int p, unsigned long int a)
{
	unsigned int nbts;

	for (nbts = 0; p || a; p >>= 1, a >>= 1)
	{
		if ((p & 1) != (a & 1))
			nbts++;
	}

	return (nbts);
}
