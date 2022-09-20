//Pattern printing-2
// 1 2 3 4 5
#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("%d\t",iCnt); //dynamic data
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