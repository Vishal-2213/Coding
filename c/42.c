//Write a program which accepts number from user and return multiplication of all digits.
#include <stdio.h>
int MulDigits(int iNo)
{
    int iDigit=0;
    int iMul=1;
 while(iNo>0)
 {

    iDigit= iNo%10;
    iMul=iMul*iDigit;
    iNo=iNo/10; 
 }
 return iMul;
}
int main()
{
    int iValue=0;
    int bRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=MulDigits(iValue);
    printf("%d\n" ,bRet);
    return 0;
}