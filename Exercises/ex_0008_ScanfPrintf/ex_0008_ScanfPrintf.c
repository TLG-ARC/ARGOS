// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void)
{
  // TODO: read 3 letters with scanf, then print their ASCII codes
  
  int status = 0;
  const int nbExpectedValues = 3;
  char x = 0;
  char y = 0;
  char z = 0;
  do
  {
    printf("\n\nPlease enter 3 letters:\n");
    status = scanf("%c %c %c", &x, &y, &z);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  printf("\nHere are the corresponding ASCII codes:\n");
  printf("%c--------->%d\n%c--------->%d\n%c--------->%d\n", x, x, y, y, z, z);
}
