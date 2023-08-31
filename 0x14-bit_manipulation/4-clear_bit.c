#include "main.h"

/**
 * _clear_bit - sets the value of a bit to 0.
 * @p: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int _clear_bit(unsigned long int *p, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*p & a)
		*p ^= a;

	return (1);
}
