// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0028_DotProduct.h"

// Function definitions
// TODO: implement ex_0028_DotProduct
int ex_0028_DotProduct(int u[], int v[], int n)
{
    int dot_product = 0;

    for (int i = 0; i < n; ++i)
    {
        dot_product += (u[i] * v[i]);
    }

    return dot_product;
}