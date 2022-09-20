#include<stdio.h>

int Sum(int Arr[],int size) 
{
    static int i=0;
    static int iSum=0;

    while(i<size)
    {
        iSum=iSum+Arr[i];
        i++;
        Sum(Arr,size);
    }
    return iSum;
}
int main()
{
    int Brr[]={10,20,30,40,50};
    int iRet=0;

    iRet=Sum(Brr,5);
    printf("Sum is : %d",iRet);
    return 0;
}