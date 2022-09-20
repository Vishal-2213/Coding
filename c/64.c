//Accept N numbers from user and accept one another number as NO, Check wheter that NO is present or not
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength,int iVal)
{
    int iCnt=0;
    for (iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iVal)
        {
            return TRUE;
        }
    }
    return FALSE;
   
}
int main()
{
    int iSize=0,iRet=0,iCnt=0, iValue=0;
    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter size \n");
    scanf("%d",&iSize);

    printf("Enter NO element:\n");
    scanf("%d",&iValue);

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

    bRet=Check(p,iSize, iValue);

    if(bRet==TRUE)
    {
        printf("Number %d is present\n",iValue);   
    }
    else
    {
        printf("Number %d is absent\n",iValue);
    }
    free(p);

    return 0;
}