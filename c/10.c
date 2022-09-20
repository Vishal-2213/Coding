// Write a program which accepts one number from a user and prints that number of even numbers on a screen
#include<stdio.h>
void PrintEven(int iNo){
    if(iNo<=0)
    {
        return;
    }
    int i;
    for(i=0; i<iNo; i++) { 
        printf("%d ",2*(i+1)); 
}
}
int main()
{
    int iValue=0;
    printf("Enter the value :");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}