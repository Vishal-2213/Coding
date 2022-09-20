//Accept N numbers from user and return product of all odd elements
#include<stdio.h> //fore printf scanf
#include<stdlib.h> //for malloc n free
void ProductOdd(int Arr[], int iLength)
{
    int iCnt=0;
    int iOdd=1;
    for(iCnt=0;iCnt<iLength;iCnt++) 
    {
        if((Arr[iCnt]%2)!=0)
        {
            iOdd=iOdd*Arr[iCnt];
        }
    }
    printf("Ans %d\n",iOdd);
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

    ProductOdd(p,iSize);

    free(p);

    return 0;
}