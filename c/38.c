//Write a program which accept number from user and count frequency of such a digits which are less than 6
#include <stdio.h>
int Count(int iNo)
{
    int freq=0;
    while(iNo>0)
    {
        if(iNo%10==1 || iNo%10==2 || iNo%10==3 || iNo%10==4 || iNo%10==5 )
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

    bRet=Count(iValue);
    printf("%d\n" ,bRet);
    return 0;
}