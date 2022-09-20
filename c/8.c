//Accept 2 numbers from user and display first number second number of times 
#include <stdio.h>
void Display(int iNo, int ifrequency)
{
    int i=0;
    for(i=1;i<=ifrequency;i++)
    {
        printf("%d ", iNo);
    }
}
int main()
{
    int iValue=0,iCount=0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    printf("Enter the frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}