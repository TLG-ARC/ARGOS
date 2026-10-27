// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0009_Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void)
{

  int status = 0;
  const int nbExpectedValues = 1;
  double radius = 0;
  do
  {
    printf("Circle radius: ");
    status = scanf(" %lf", &radius);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  double surface = radius * radius * M_PI;
  printf("pi = %.6lf\nCircle surface = %.2lf\n", M_PI, surface);
}
