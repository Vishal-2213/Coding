//Accept number from user and display it's factors
#include<stdio.h>
void DisplayFactor(int iNo){

for(int i = 1; i <iNo;i++)
{
    if((iNo%i)==0){
        printf("%d \n",i);
    }
}   
}
int main(){
    int iValue =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}