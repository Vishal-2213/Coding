//Accept N numbers from user and display all such numbers contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>
void Digit(int Arr[],int iLength)
{
    int iCnt=0;
    int i=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>100 && Arr[iCnt]<1000)
        {
            printf("%d ",Arr[iCnt]);
        }
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

    Digit(p,iSize);
    free(p);

    return 0;
}