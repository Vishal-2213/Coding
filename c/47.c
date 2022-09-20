//check whether entered number by user is amstrong number or not 
//153 = 1^3 + 5^3 + 3^3
//371 = 3^3 + 7^3 + 1^3 //we took raise to 3 b'coz that number of digits is present in that number 
#include <stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Power(int iNo1,int iNo2)
{
    int lMul=1;
    register int iCnt=0;
    //Registers are faster than memory to access
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        lMul=lMul*iNo1;
    }
    return lMul;
}
BOOL CheckAmstrong(int iNo)
{
    int iTemp=0;
    int iDigCnt=0,iDigit=0,iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;
    while(iNo!=0)
    {
        iDigCnt++; 
        iNo=iNo/10; 
    }
    iNo=iTemp;
    while(iNo!=0)
    {
        iDigit=iNo%10;
    iSum=iSum+Power(iDigit,iDigCnt);
        iNo=iNo/10;
    }
    if(iSum==iTemp)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    int iValue=0;
    bool bRet;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet=CheckAmstrong(iValue);

    if(bRet==TRUE)
    {
        printf("It is an amstrong number\n");
    }
    else
    {
        printf("It is not an amstrong number\n");
    }
    return 0;
}