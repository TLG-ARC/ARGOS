// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

// Function definitions
// TODO: implement ex_0027_Array2DSum

int get_array_data(char string[])
{
    int status = 0;
    const int nbExpectedValues = 1;
    int x = 0;
    do
    {
        printf("Nb %s (max.50): ", string);
        status = scanf("%d", &x);

        if (x < 0 || x > 50)
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

    return x;
}

int get_int_input(int line, int col)
{
    int status = 0;
    const int nbExpectedValues = 1;
    int x = 0;
    do
    {
        printf("array[%d][%d]: ", line, col);
        status = scanf("%d", &x);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while (status != nbExpectedValues && status != EOF);

    return x;
}

void ex_0027_Array2DSum(void)
{
    int nb_lines = get_array_data("lines");
    int nb_columns = get_array_data("columns");
    int total_sum = 0;

    if (nb_lines == 0 || nb_columns == 0)
    {
        printf("Total sum: %d\n", total_sum);

        return;
    }

    int array[nb_lines][nb_columns];

    for (int i = 0; i < nb_lines; ++i)
    {
        for (int j = 0; j < nb_columns; ++j)
        {
            array[i][j] = get_int_input(i, j);
            total_sum += array[i][j];
        }
    }

    printf("Total sum: %d\n", total_sum);
    return;
}