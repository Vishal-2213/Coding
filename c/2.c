//Accept one number from user and print that number of '*' on the screen
#include<stdio.h>
void Accept(int iNo)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("* \n");
    }
}
int main()
{   
    int iValue=0;
    iValue=5;
    Accept(iValue);
    return 0;
}
