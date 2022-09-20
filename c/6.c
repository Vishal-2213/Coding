//Accept one number from user and print that number of '*' on the screen (using while loop)
#include<stdio.h>
void Accept(int iNo)
{
    while(iNo>0)
    {
        printf("*\n");
        iNo--;
    }
    
}
int main()
{   
    int iValue=0;
    printf("Enter a number: ");
    scanf("%d", &iValue);
    Accept(iValue);
    return 0;
}