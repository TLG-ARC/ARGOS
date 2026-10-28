// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdlib.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  int status = 0;
  const int nbExpectedValues = 3;
  int x = 0;
  int y = 0;
  int z = 0;

  do
  {
    printf("Please enter 3 integers separated by commas: ");
    status = scanf(" %d , %d , %d", &x, &y, &z);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  int values[] = {x, y, z};
  qsort(values, 3, sizeof(values[0]), compare);
  
  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", values[2], values[1], values[0]);
 
}
