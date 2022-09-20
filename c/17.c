//Count the number of factors of the given number.
#include <stdio.h>
#include<stdbool.h>
int CountFactor(int iNo)
{
    int i=0;
    int iFactCnt=0;
    for(i=2;i<=(iNo/2);i++) //i=2 this excludes 1 as a factor
    {
        if(iNo%i==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}
int main(){
    int iValue =0;
    int iRet;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet=CountFactor(iValue);

    printf("Number of factors are : %d\n" ,iRet);
    return 0;
}