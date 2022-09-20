//Pattern printing-5
// 1 2 3 4 4 3 2 1
//O(2N) - Time complexity
//Sequencial loop
#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
     for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("%d ",iCnt); //static data 
    }
    for(iCnt=iVal;iCnt>=1;iCnt--)
    {
        printf("%d ",iCnt);
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