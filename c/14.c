//Write a program which accept number from user and print sum of factors of that number.(with n/2 TC)
#include<stdio.h>
int DisplaySumFactor(int iNo){
   int isum=0;
   int i=0;
    if(iNo<0){
        iNo=-iNo;
    }
    for(i=1;i<=(iNo/2);i++)
    {
         if((iNo%i)==0)
         { 
             isum=isum+i;
         } 
    }
     return isum; 
}

int main(){
    int iValue =0;
    int iRet=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

   iRet= DisplaySumFactor(iValue);
   printf("Sum of factors : %d\n", iRet);
    
    return 0;
}

