//Write a program which accepts number from user and return the count of even digits.
#include <stdio.h>
int CountEven(int iNo)
{
    int freq=0;
    while(iNo>0)
    {
        if(iNo%2==0)
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

    bRet=CountEven(iValue);
    printf("%d\n" ,bRet);
    return 0;
}