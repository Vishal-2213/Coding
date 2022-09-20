//Forward and Backward loop concepts
#include <stdio.h>
void DisplayF(int iNo) //display numbers forward
{
    for(int i=1;i<=iNo;i++)
    {
        printf("%d\n",i);
    }
}
void DisplayB(int iNo) //display numbers backward
{
    for(int i=iNo;i>=1;i--)
    {
        printf("%d\n",i);
    }
}
int main(){
    int iValue =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Forward display \n");
    DisplayF(iValue);
    printf("Backward display \n");
    DisplayB(iValue);
    
    return 0;
}