//Accept N numbers from user and return difference between summation of even elements and the sum of odd elements
#include <stdio.h>
#include<stdlib.h>
int FreqDifference(int Arr[], int iLength)
{
    int iCnt=0;
    int iEvenCnt=0,iOddCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    return abs (iEvenCnt-iOddCnt);
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
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

    iRet=FreqDifference(p,iSize);

    printf("Result is %d", iRet);

    free(p);
    return 0;
}