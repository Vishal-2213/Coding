//Accept N numbers from user and return the difference between smallest number and largest number.
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Difference(int Arr[],int iLength)
{
    int iCnt=0;
    int iLarge;
    int iLow;
    iLow=iLarge=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++) 
    {
        if(Arr[iCnt]>iLarge)
        {
            iLarge=Arr[iCnt];
        }
        if(Arr[iCnt]<iLow)
        {
            iLow=Arr[iCnt];
        }
    }
    printf("large=%d , small=%d \n",iLarge,iLow);
    return abs(iLarge-iLow);
}
int main()
{
    int iSize=0,iCnt=0;
    int iRet=0;
    int *p=NULL;

    printf("Enter size \n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Difference(p,iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;
}