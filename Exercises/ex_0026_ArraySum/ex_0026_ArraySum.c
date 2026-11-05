// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

// Function definitions
// TODO: implement ex_0026_ArraySum

void ex_0026_ArraySum(void)
{
    int status = 0;
    const int nbExpectedValues = 1;
    int array_size = 0;
    do
    {
        printf("Nb values (max.50): ");
        status = scanf("%d", &array_size);

        if (array_size < 0 || array_size > 50)
        {
            status = 0;
        }

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while (status != nbExpectedValues && status != EOF);

    if (array_size == 0)
    {
        printf("array:\n\nTotal sum: 0\n");
    }
    else
    {
        int array[array_size];
        for (int i = 0; i < array_size; ++i)
        {
            int status = 0;
            const int nbExpectedValues = 1;
            int number = 0;
            do
            {
                printf("Value %d? ", i);
                status = scanf("%d", &number);

                {
                    int c;
                    do
                    {
                        c = getchar();
                    } while (c != '\n' && c != EOF);
                }
            } while (status != nbExpectedValues && status != EOF);

            array[i] = number;
        }

        printf("array:\n");
        int sum = 0;

        if (array_size > 0)
        {
            for (int i = 0; i < array_size; i++)
            {
                sum += array[i];
                if (i == array_size - 1)
                {
                    printf("%d\n", array[i]);
                }
                else
                {
                    printf("%d ", array[i]);
                }
            }
        }
        else
        {
            printf("\n");
        }
        printf("Total sum: %d\n", sum);
    }
}