//Accept base and power from user and give the result(using typedef)
//Used in industrial programming

#include "46header.h"
ULONG Power(int iNo1,int iNo2)
{
    ULONG lMul=1;
    register int iCnt=0;
    //Registers are faster than memory to access
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        lMul=lMul*iNo1;
    }
    return lMul;
}