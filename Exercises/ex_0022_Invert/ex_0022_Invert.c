// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0022_Invert.h"

// Function definitions
// TODO: implement ex_0022_Invert
int ex_0022_Invert(int n)
{
    if (n < 0)
    {
        return -1;
    }

    int res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n = n / 10;
    }

    return res;
}