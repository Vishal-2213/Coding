//Pattern printing-6
// 4 3 2 1 1 2 3 4
#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=iVal;iCnt>=1;iCnt--)
    {
        printf("%d  ",iCnt);
    }
     for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("%d  ",iCnt); //static data 
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