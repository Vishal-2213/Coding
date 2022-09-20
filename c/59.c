//Accept number from user and display all such elements which are divisible by 5
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
     int iCnt=0;
    int iEvenCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
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

    iRet=CountEven(p,iSize);
    printf("Result is %d",iRet);
    free(p);

    return 0;
}