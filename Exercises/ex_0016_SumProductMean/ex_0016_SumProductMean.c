// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

// Function definitions
void ex_0016_SumProductMean(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "Number of values to read: ";
  // print with printf(value_message, i); where i is the value number, starting at 1
  const char *value_message = "%d. number: ";

  // TODO: read N (between 1 and 15), then N integers, and print their sum, product and mean

  // N part.
  int status = 0;
  const int nbExpectedValues = 1;
  int n = 0;
  bool is_n_valid = false;
  do
  {
    printf("%s", input_message);
    status = scanf("%d", &n);

    if (n >= 1 && n <= 15)
    {
      is_n_valid = true;
    }
    else
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

  // Number part
  if (is_n_valid)
  {
    int sum = 0;
    int product = 1;
    double mean = 0;

    for (int i = 1; i <= n; i++)
    {

      int status = 0;
      const int nbExpectedValues = 1;
      int x = 0;
      do
      {
        printf(value_message, i);
        status = scanf("%d", &x);
        {
          int c;
          do
          {
            c = getchar();
          } while (c != '\n' && c != EOF);
        }
      } while (status != nbExpectedValues && status != EOF);

      sum += x;
      product *= x;
    }

    mean = sum / (double)n;

    printf("Sum = %d\nProduct = %d\nMean = %.4lf\n", sum, product, mean);
  }
}
