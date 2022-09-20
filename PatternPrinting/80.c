//Pattern printing-7
// -4 -3 -2 -1 0 1 2 3 4
//TC = 2N
#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=-iVal;iCnt<=iVal;iCnt++)
    {
        printf("%d ",iCnt); //dynamic data
    }
}
int main()
{
    int iValue=0;
    printf("Please enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}