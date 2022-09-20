//Pattern printing-1
// *  *  *  *  *  *
#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("*\t"); //static data 
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