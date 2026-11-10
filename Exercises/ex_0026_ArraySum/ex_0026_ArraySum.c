// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

#define min_array_size 0
#define max_array_size 50

// Function definitions
// TODO: implement ex_0026_ArraySum

int get_array_size(void)
{
    int status = 0;
    const int nbExpectedValues = 1;
    int array_size = 0;
    do
    {
        printf("Nb values (max.50): ");
        status = scanf("%d", &array_size);

        if (array_size < min_array_size || array_size > max_array_size)
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
    return array_size;
}

int get_array_input(int array_index)
{
    int status = 0;
    const int nbExpectedValues = 1;
    int number = 0;
    do
    {
        printf("Value %d? ", array_index);
        status = scanf("%d", &number);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while (status != nbExpectedValues && status != EOF);
    return number;
}

void ex_0026_ArraySum(void)
{
    int array_size = get_array_size();

    if (array_size == 0)
    {
        printf("array:\n\nTotal sum: 0\n");
        return;
    }

    int array[array_size];
    for (int i = 0; i < array_size; ++i)
    {
        int number = get_array_input(i);
        array[i] = number;
    }

    int sum = 0;
    printf("array:\n");
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

    printf("Total sum: %d\n", sum);
}