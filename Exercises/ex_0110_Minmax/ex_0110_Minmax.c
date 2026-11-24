// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0110_Minmax.h"

// Function definitions
// TODO: implement ex_0110_Minmax
int get_biggest(int a, int b, int c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int get_smallest(int a, int b, int c)
{
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

void ex_0110_Minmax(int a, int b, int c, int *min, int *max)
{
    *min = get_smallest(a, b, c);
    *max = get_biggest(a, b, c);
}
