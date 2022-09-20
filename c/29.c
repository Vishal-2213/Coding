//Write a program which accepts number from user and display its multiplication of factors.
#include <stdio.h>
int MulFactor(int iNo)
{
    int i=0;
    int mul=1;
    for(int i=1;i<=iNo/2;i++)
    {
    if(iNo%i==0)
    {
        mul =mul*i;
    }
    }
    return mul;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=MulFactor(iValue);

    printf("%d",iRet);
    return 0;
}