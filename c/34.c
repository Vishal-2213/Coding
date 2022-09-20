//write a program which accepts number from user and display its digits in reverse order 
#include <stdio.h>
void Displaydigit(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
        
    }
   

}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Displaydigit(iValue);
    return 0;
}