//Accept number from user and return sumation of digits
#include<stdio.h>
int SumDigits(int iNo)
{
    int iDigit=0;
    int iCount=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0) //while(iNo>0) works same with both condition
    {
        iDigit= iNo%10;
        iCount=iCount+iDigit;
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=SumDigits(iValue);

    printf("The sum of digits you entered are : %d",iRet);
    return 0;
}