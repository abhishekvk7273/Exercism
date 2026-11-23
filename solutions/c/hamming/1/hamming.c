#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
    int diff = 0;
    if (strlen(lhs) == strlen(rhs))
    {
        for (int i = 0, n = strlen(lhs) ; i < n; i++)
        {
            if (lhs[i] != rhs[i])
            {
                diff++;
            }
        }
    }
    else
    {
        return -1;
    }
    return diff;
}