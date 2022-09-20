//Write a program which accepts number from user and count frequency of 4 in it.
#include <stdio.h>
int CountFour(int iNo)
{
    int freq=0;
    while(iNo>0)
    {
        if(iNo%10==4)
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

    bRet=CountFour(iValue);
    printf("%d\n" ,bRet);
    return 0;
}