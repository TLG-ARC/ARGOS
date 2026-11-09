// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0030_InputComplex, ex_0030_SumComplex, ex_0030_DiffComplex, ex_0030_PrintComplex and ex_0030_Complex

Complex ex_0030_InputComplex(void)
// {
//     int status = 0;
//     const int nbExpectedValues = 4;
//     double real = 0;
//     double imaginary = 0;
//     char last_char = 0;
//     char first_char = 0;
//     bool valid = false;
//     Complex res;

//     do
//     {
//         printf("Please enter a complex number (r,i): ");
//         status = scanf(" %c%lf,%lf%c", &first_char, &real, &imaginary, &last_char);

//         valid = ((status == nbExpectedValues) && (first_char = '(') && (last_char == ')'));

//         if (last_char != '\n' && status != EOF)
//         {
//             int c;
//             do
//             {
//                 c = getchar();
//             } while (c != '\n' && c != EOF);
//         }
//     } while (!valid && status != EOF);

//     res.real = real;
//     res.imaginary = imaginary;

//     return res;
// }
{
    double real = 0;
    double imaginary = 0;
    int valid = 0;
    int eof = 0;
    Complex res;

    do
    {
        int status;
        int n = 0; /* only set by scanf if the ')' was matched */
        int c;

        printf("Please enter a complex number (r,i): ");
        status = scanf(" ( %lf , %lf )%n", &real, &imaginary, &n);

        valid = (status == 2 && n > 0);

        /* Flush the line, and reject anything but spaces/tabs after ')' */
        while ((c = getchar()) != '\n' && c != EOF)
        {
            if (c != ' ' && c != '\t')
            {
                valid = 0;
            }
        }
        if (c == EOF)
        {
            eof = 1;
        }
    } while (!valid && !eof);

    res.real = real;
    res.imaginary = imaginary;

    return res;
}

Complex ex_0030_SumComplex(Complex nb1, Complex nb2)
{
    Complex res;
    res.imaginary = nb1.imaginary + nb2.imaginary;
    res.real = nb1.real + nb2.real;
    return res;
}

Complex ex_0030_DiffComplex(Complex nb1, Complex nb2)
{
    Complex res;
    res.imaginary = nb1.imaginary - nb2.imaginary;
    res.real = nb1.real - nb2.real;
    return res;
}

void ex_0030_PrintComplex(Complex nb)
{
    printf("%.2lf + %.2lfi\n", nb.real, nb.imaginary);
    return;
}

void ex_0030_Complex(void)
{
    Complex nb1 = ex_0030_InputComplex();
    Complex nb2 = ex_0030_InputComplex();

    printf("\nSum = ");
    ex_0030_PrintComplex(ex_0030_SumComplex(nb1, nb2));
    printf("\nDiff = ");
    ex_0030_PrintComplex(ex_0030_DiffComplex(nb1, nb2));
}