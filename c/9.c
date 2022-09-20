//Accept a number from user and check it is even or odd number
#include <stdio.h>
void Check(int iNo)
{
    if(iNo%2==0){
        printf("Even number!");
    }
    else{
        printf("Odd number!");
    }
}
int main(){
    int iValue=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    Check(iValue);
    return 0;
}