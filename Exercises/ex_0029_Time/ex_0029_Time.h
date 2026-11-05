// Author: HE-Arc

#ifndef EX_0029_TIME_H
#define EX_0029_TIME_H

// Standard includes

// Local includes

// Types

// Function prototypes

#endif // EX_0029_TIME_H

typedef struct
{
    int hh;
    int mm;
    int ss;
} Time;

Time ex_0029_InitTime(int hh, int mm, int ss);
void ex_0029_PrintTime(Time time);
void ex_0029_Time(void);