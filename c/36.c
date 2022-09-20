//Write a program which accepts number from user and count frequency of 2 in it.
#include <stdio.h>
int CountTwo(int iNo)
{
    int freq=0;
    while(iNo>0)
    {
        if(iNo%10==2)
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

    bRet=CountTwo(iValue);
    printf("%d\n" ,bRet);
    return 0;
}