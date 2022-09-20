//Accept one number from user and check whether it is  divisible by 5 or not.
#include <stdio.h>
typedef int BOOL;
#define True 1
#define False 0
int Check(int iNo)
{
    if((iNo%5==0)){
        return True;
    }
    else{
        return False;
    }
}
int main(){
    int iVal = 0;
    BOOL bRet=False;

    printf("Enter a number: ");
    scanf("%d",&iVal);

    bRet= Check(iVal);
    
    if(bRet==True){
        printf("Yes!! Number is divisible by 5.\n");
    }
    else{
        printf("No!! Number is not divisible by 5.\n");
    }
    return 0;
}