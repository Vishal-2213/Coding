//Accept number from user and return frequency of 11
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
     int iCnt=0;
    int iElevenCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iElevenCnt++;
        }
    }
    return iElevenCnt;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter size of elements");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Error: Out of memory");
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Frequency(p,iSize);
    printf("Result is %d",iRet);
    free(p);

    return 0;
}