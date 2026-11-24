// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0114_AccumulateStats.h"

// Function definitions
// TODO: implement ex_0114_AccumulateStats
void ex_0114_AccumulateStats(const int values[], int count, int *sum, double *mean)
{
    *mean = 0;
    *sum = 0;
    for (int i = 0; i < count; ++i)
    {
        *sum = *sum + values[i];
    }

    *mean = (double)*sum / (double)count;
}