// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0182_StringViaPtr.h"

// Function definitions
// TODO: implement ex_0182_StringViaPtr
int ex_0182_StringViaPtr(char const *text)
{
    int counter = 0;
    while (*text != '\0')
    {
        counter++;
        text++;
    };
    return counter;
}