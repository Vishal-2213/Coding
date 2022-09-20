//Accept N numbers from user and return the larget number.
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Maximum(int Arr[],int iLength)
{
    int iCnt=0;
    int big=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++) 
    {
        if(Arr[0]<Arr[iCnt])
        {
            Arr[0]=Arr[iCnt];
        }
    }
    return Arr[0];
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

    iRet=Maximum(p,iSize);

    printf("Largest number is %d",iRet);

    free(p);

    return 0;
}