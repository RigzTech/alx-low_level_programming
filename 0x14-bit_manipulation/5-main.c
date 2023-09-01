#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int p;

    p = flip_bits(1024, 1);
    printf("%u\n", p);
    p = flip_bits(402, 98);
    printf("%u\n", p);
    p = flip_bits(1024, 3);
    printf("%u\n", p);
    p = flip_bits(1024, 1025);
    printf("%u\n", p);
    return (0);
}
