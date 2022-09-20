//Accept N numbers from user and display summation of digits of each number
//not running
#include<stdio.h>
#include<stdlib.h>
void DigitSum(int Arr[],int iLength)
{
    int iCnt=0;
    int iDigit=0;
    int iSum=0;
    int itemp=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=0;
        while(Arr[iCnt]!=0)
        {
            iDigit = Arr[iCnt]%10;
            iSum = iSum + iDigit;
            Arr[iCnt]=Arr[iCnt]/10;
        }
        itemp=iSum;
        printf("%d ",itemp);
    }
   
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Error: Out of memory");
    }
    printf("Enter %d elements \n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitSum(p,iSize);
    free(p);

    return 0;
}