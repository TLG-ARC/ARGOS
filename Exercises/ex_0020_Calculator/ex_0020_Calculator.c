// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator

double ex_0020_Calculator(double a, double b, char ope)
{
    double res = 0;

    switch (ope)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        if (b == 0)
        {
            return res;
        }

        return a / b;
        break;

    default:
        return res;
    }
}