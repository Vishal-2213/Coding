//accept number from user and display even digits
#include<stdio.h>
int DisplayEven(int iNo)
{
    int iDigit=0;
    int iEven=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0) //while(iNo>0) works same with both condition
    {
       if(iNo%2==0)
       {
           iEven++;
       }
       iNo=iNo/10;
    }
    return iEven;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=DisplayEven(iValue);

    printf("The even digits are : %d",iRet);
    return 0;
}