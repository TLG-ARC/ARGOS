// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <string.h>

// Local includes
#include "ex_0031_Person.h"

// Function definitions
// TODO: implement ex_0031_Person

void ex_0031_Person(void)
{
    Person persons[10] = {
        {"Knuth", "Donald", 1938},
        {"Kernighan", "Brian", 1942},
        {"Ritchie", "Dennis", 1941},
        {"Thompson", "Ken", 1943},
        {"Minsky", "Marvin", 1927},
        {"Dijkstra", "Edsger", 1930},
        {"Stroustrup", "Bjarne", 1950}};

    int nb_persons = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (persons[i].first_name[0] != '\0')
        {
            nb_persons++;
        }
    }

    printf("%d Persons\n", nb_persons);

    printf("Persons less than 80 years old:\n");
    for (int i = 0; i < nb_persons; ++i)
    {
        int age = 2020 - persons[i].birth_year;
        if (age < 80)
        {
            printf("%s %s %d years\n", persons[i].first_name, persons[i].last_name, age);
        }
    }

    printf("\n");

    int sorted_names_first_index = 0;
    int sorted_names_last_index = 0;

    for (int i = 0; i < nb_persons; ++i)
    {

        if (strcmp(persons[i].last_name, persons[sorted_names_last_index].last_name) > 0)
        {
            sorted_names_last_index = i;
        }

        if (strcmp(persons[i].last_name, persons[sorted_names_first_index].last_name) < 0)
        {
            sorted_names_first_index = i;
        }
    }

    printf("Alphabetic order:\n");
    printf("The first is: %s\n", persons[sorted_names_first_index].last_name);
    printf("The last is: %s\n", persons[sorted_names_last_index].last_name);
}