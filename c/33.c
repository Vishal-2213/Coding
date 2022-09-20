//Write a program which accepts number from user and return difference between summation of factors and non factors
#include <stdio.h>
int FactDiff(int iNo)
{
    int i=0;
    int Fsum=0;
    int NFsum=0;
    for(i=1;i<iNo;i++)
    {
        if(iNo%i ==0)
        {
            Fsum=Fsum+i;
        }    
    }
    printf("%d\n",Fsum);
    for(i=1;i<iNo;i++)
    {
        if(iNo%i !=0)
        {
            NFsum=NFsum+i;
        }
       
    }
    printf("%d\n",NFsum);
    return Fsum-NFsum;

}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
    printf("Difference between factor and non factors is : %d ",iRet);
    return 0;
}