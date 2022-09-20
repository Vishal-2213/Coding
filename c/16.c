//Check entered number is prime or not prime
#include <stdio.h>
#include<stdbool.h>
int CountFactor(int iNo)
{
    int i=0;
    int iFactCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=2;i<=(iNo/2);i++) //i=2 this excludes 1 as a factor
    {
        if(iNo%i==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}
bool CheckPrime(int iNo)
{
    int iRet=0;
    iRet=CountFactor(iNo);
 if (iRet==0)
 {
     return true;
 }
 else
 {
     return false;
 }
}
int main(){
    int iValue =0;
    bool bRet;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    bRet=CheckPrime(iValue);

if (bRet==true)
{
    printf("%d is a prime number \n",iValue);
}
else
{
    printf("%d is not a prime number \n",iValue);
}    
    return 0;
}