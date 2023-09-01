#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @p: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *p, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*p = (*p | a);

	return (1);
}
