// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0033_SwapPtr.h"

// Function definitions
// TODO: implement ex_0033_SwapPtr
void ex_0033_SwapPtr(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
