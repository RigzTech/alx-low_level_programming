#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int paramater
 * @b: second int parameter
 * return - nothing
 */

void swap_int(int *a, int *b)
{
	int swapper = *a;
	*a = *b;
	*b = swapper;
}
