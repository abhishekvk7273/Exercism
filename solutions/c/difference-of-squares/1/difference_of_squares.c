#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int sum = 0;
    for (unsigned int i = 0; i < number; i++)
    {
        sum += (i + 1) * (i + 1);
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int square = 0;
    for (unsigned int i = 0; i < number; i++)
    {
        square +=  i + 1;
    }
    return square * square;
}

unsigned int difference_of_squares(unsigned int number)
{
    unsigned int sum_sqr = sum_of_squares(number);
    unsigned int sqr_sum = square_of_sum(number);
    return sqr_sum - sum_sqr;
}
