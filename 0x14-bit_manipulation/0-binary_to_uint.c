#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @bn: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *bn)
{
	unsigned int uint;
	int len, base_two;

	if (!bn)
		return (0);

	uint = 0;

	for (len = 0; bn[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (bn[len] != '0' && bn[len] != '1')
		{
			return (0);
		}

		if (bn[len] & 1)
		{
			uint += base_two;
		}
	}

	return (uint);
}
