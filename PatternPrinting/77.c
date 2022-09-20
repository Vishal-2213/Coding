//Pattern printing-4
// 5 * 4 * 3 * 2 * 1 *
#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=iVal;iCnt>=1;iCnt--)
    {
        printf("%d  * \t",iCnt);
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