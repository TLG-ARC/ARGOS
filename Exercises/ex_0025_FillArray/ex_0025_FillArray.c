// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray
int ex_0025_FillArray(int array[], int max_capacity)
{
    if (max_capacity <= 0)
    {
        return 0;
    }

    int edited_values = 0;

    for (int i = 0; i < max_capacity; ++i)
    {
        int status = 0;
        const int nbExpectedValues = 1;
        int x = 0;

        do
        {
            status = scanf("%d", &x);
            {
                int c;
                do
                {
                    c = getchar();
                } while (c != '\n' && c != EOF);
            }
        } while (status != nbExpectedValues && status != EOF);

        if (status == EOF || x < 0)
        {
            return edited_values;
        }

        array[i] = x;
        edited_values++;
    }

    return edited_values;
}
