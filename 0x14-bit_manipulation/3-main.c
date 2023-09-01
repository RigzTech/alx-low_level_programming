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
    set_bit(&p, 5);
    printf("%lu\n", p);
    p = 0;
    set_bit(&p, 10);
    printf("%lu\n", p);
    p = 98;
    set_bit(&p, 0);
    printf("%lu\n", p);
    return (0);
}
