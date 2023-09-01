#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int p;

    p = 1024;
    clear_bit(&p, 10);
    printf("%lu\n", p);
    p = 0;
    clear_bit(&p, 10);
    printf("%lu\n", p);
    p = 98;
    clear_bit(&p, 1);
    printf("%lu\n", p);
    return (0);
}
