// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0029_Time.h"

// TODO: implement ex_0029_InitTime
Time ex_0029_InitTime(int hh, int mm, int ss)
{
    Time res = {hh, mm, ss};
    return res;
}

// TODO: implement ex_0029_PrintTime
void ex_0029_PrintTime(Time time)
{
    printf("%02d:%02d:%02d\n", time.hh, time.mm, time.ss);
    return;
}

// TODO: implement ex_0029_Time
void ex_0029_Time(void)
{
    Time t = ex_0029_InitTime(5, 3, 17);
    ex_0029_PrintTime(t);
    return;
}
