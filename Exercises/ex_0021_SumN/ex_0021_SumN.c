// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN

int ex_0021_SumN(int a, int b)
{
    if (a == b)
    {
        return a;
    }

    int min = (a > b) ? b : a;
    int max = (a > b) ? a : b;
    int res = 0;

    for (int i = min; i <= max; ++i)
    {
        res += i;
    }
    return res;
}
