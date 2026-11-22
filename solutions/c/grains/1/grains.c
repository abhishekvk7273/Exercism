#include "grains.h"
#include <stdio.h>
#include <math.h>

uint64_t square(uint8_t index)
{
    uint64_t grains = (uint64_t)pow(2, index - 1);
    return grains;
}

uint64_t total(void)
{
    uint64_t total = 0;
    for (int i = 1; i <= 64; i++)
    {
        total += square(i);
    }  
    return total;
}
