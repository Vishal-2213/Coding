//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
#include <stdio.h>
int CountDiff(int iNo)
{
    int iDigit=0;
    int even=0;
    int odd=0;
    int freq=0;
   while(iNo!=0) //while(iNo>0) works same with both condition
    {
        iDigit= iNo%10;
        if(iNo%2==0){
        even=even+iDigit;}
        else
        {
            odd=odd+iDigit;
        }
        iNo=iNo/10;
    }
    
 return even-odd;
}
int main()
{
    int iValue=0;
    int bRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CountDiff(iValue);
    printf("%d\n" ,bRet);
    return 0;
}