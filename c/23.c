//reverse the given number
#include<stdio.h>
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        //logic
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    return iRev;

}
int main()
{
    int iValue=0;
    int iRet;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);

    printf("Reverse of number is %d",iRet);
}