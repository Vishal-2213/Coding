//Count the number of digits of number given by user
#include<stdio.h>
int CountDigits(int iNo)
{
    int i=0;
    //int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0) //while(iNo!=0) works same with both condition
    {
       //iDigit= iNo%10;
        i++;
        iNo=iNo/10;
    }
    return i;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("The number of digits you entered are : %d",iRet);
    return 0;
}