//Write a program which accepts number from user and return the  count of digits in between 3 and 7.
#include <stdio.h>
int CountRange(int iNo)
{
    int freq=0;
   while(iNo>0)
    {
        if(iNo%10==4 || iNo%10==5 || iNo%10==6  )
            freq++;
        iNo=iNo/10;
    }
    return freq;
    return freq;
}
int main()
{
    int iValue=0;
    int bRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CountRange(iValue);
    printf("%d\n" ,bRet);
    return 0;
}