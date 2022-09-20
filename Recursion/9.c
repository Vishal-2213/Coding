#include<stdio.h>

void Display(int iNo)
{
   // static int i=0;
    static char ch='a';
    
    if(iNo>0)
    {
        printf("%c\t",ch);
        ch++;
        iNo--;
        Display(iNo);
    }
}

int main() 
{
    int iValue=0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}