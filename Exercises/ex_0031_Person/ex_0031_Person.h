// Author: HE-Arc

#define MAX_CHAR 20

#ifndef EX_0031_PERSON_H
#define EX_0031_PERSON_H

// Standard includes

// Local includes

// Types

// Function prototypes

#endif // EX_0031_PERSON_H

typedef struct
{
    char last_name[MAX_CHAR];
    char first_name[MAX_CHAR];
    int birth_year;
} Person;

void ex_0031_Person(void);