// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0030_InputComplex, ex_0030_SumComplex, ex_0030_DiffComplex, ex_0030_PrintComplex and ex_0030_Complex

Complex ex_0030_InputComplex(void)
{
    double real = 0;
    double imaginary = 0;
    int c = 0;
    bool valid = false;
    Complex res;

    do
    {
        int status = 0;

        printf("Please enter a complex number (r,i): ");
        status = scanf(" ( %lf , %lf )", &real, &imaginary);

        if (status == 2)
        {
            valid = true;
        }

        while ((c = getchar()) != '\n' && c != EOF)
        {
            if (c != ' ' && c != '\t')
            {
                valid = false;
            }
        }
    } while (!valid && c != EOF);

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