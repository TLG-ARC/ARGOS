// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
  // TODO: read a character, then tell whether it is lowercase, uppercase or not a letter

  int status = 0;
  const int nbExpectedValues = 1;
  char letter = 0;
  do
  {
    printf("Type a letter: ");
    status = scanf(" %c", &letter);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  if (letter >= 'a' && letter <= 'z')
  {
    printf("lowercase\n");
    return;
  }

  if (letter >= 'A' && letter <= 'Z')
  {
    printf("UPPERCASE\n");
    return;
  }

  printf("The character you entered is not a letter.\n");
}
