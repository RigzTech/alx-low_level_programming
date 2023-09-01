#include <stdio.h>
#include "main.h"

int main(void)
{
    int p;

    p = get_endianness();
    if (p != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
