//Write a program which accept number from user and check whether it contains 0 in it or not.
#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckZero(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        if(iNo%10==0)
            {return TRUE;}
        iNo/=10;
    }
    return FALSE;
}
int main()
{
    int iValue;
    BOOL bRet=FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It does not contain zero");
    }
    return 0;

}