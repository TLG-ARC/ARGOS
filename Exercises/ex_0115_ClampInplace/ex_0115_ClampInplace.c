// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0115_ClampInplace.h"

// Function definitions
// TODO: implement ex_0115_ClampInplace
void ex_0115_ClampInplace(int *value, int min, int max)
{
    if (*value > max)
    {
        *value = max;
    }
    else if (*value < min)
    {
        *value = min;
    }
}