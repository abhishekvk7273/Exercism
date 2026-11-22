#include "collatz_conjecture.h"

int steps(int start)
{
    if (start <= 0)
    {
        return ERROR_VALUE;
    }
    int steps = 0;
    long long num = start; 
    while (num != 1)
    {

        if (num % 2 == 0)
        {
            num /= 2;
            steps ++;
        }
        else
        {
            num = num * 3 + 1;
            steps++;
        }
        
    }
    return steps;
}