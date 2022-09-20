//Printing reverse of a number (using while loop)
#include<stdio.h>
void DisplayDigits(int iNo) //logic
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0) //while(iNo>0) works same with both condition
    {
        iDigit= iNo%10;
        printf("%d",iDigit);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}