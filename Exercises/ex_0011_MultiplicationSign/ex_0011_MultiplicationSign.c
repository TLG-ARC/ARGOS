// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  int status = 0;
  const int nbExpectedValues = 2;
  
  int a = 0;
  int b = 0;

  do
  {
    printf("Please enter 2 integers: ");
    status = scanf(" %d %d", &a, &b);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  char sign;
  if (a*b > 0) sign = '>';
  if (a*b < 0) sign = '<';
  if (a*b == 0) sign = '=';
  
 
  printf("%d * %d %c 0\n", a, b, sign);
}
