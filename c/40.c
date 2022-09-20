//Write a program which accepts number from user and return the  count of odd digits.
#include <stdio.h>
int CountOdd(int iNo)
{
    int freq=0;
    while(iNo>0)
    {
        if(iNo%2!=0)
            freq++;
        iNo=iNo/10;
    }
    return freq;
}
int main()
{
    int iValue=0;
    int bRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CountOdd(iValue);
    printf("%d\n" ,bRet);
    return 0;
}