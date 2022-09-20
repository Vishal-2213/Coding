//Write a program which accept number from user and print non factors of that number.(with n/2 TC)
#include<stdio.h>
void DisplayNonFactor(int iNo){
 
 int i=0;
    if(iNo<=0){
        iNo=-iNo;
    }
    for(i=1;i<iNo;i++){
         if((iNo%i)!=0){
             printf("%d \n",i);
    }
}
}
int main(){
    int iValue =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayNonFactor(iValue);
    
    return 0;
}
//Time Complexity : O(n)