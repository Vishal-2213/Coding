//Accept n numbers from user and display even numbers from it 
#include<stdio.h> //fore printf scanf
#include<stdlib.h> //for malloc n free
void DisplayEven(int Arr[], int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++) 
    {
        if((Arr[iCnt]%2)==0)
        {
            printf("Even numbers are :%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL; //initialize to NULL for avoiding run time accident
    printf("Enter size of elements :\n");
    scanf("%d",&iSize);

    ptr =(int *)malloc(iSize * sizeof(int));
    
    printf("Enter the values :\n");
    for(iCnt=0;iCnt<iSize;iCnt++) 
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayEven(ptr,iSize);
    free(ptr);
    return 0;
}

//Steps to solve problems of N number

// Step1: Accept the size of array from user (main)
// Step2: Allocate the memory dynamically for array elements (main)
// Step3: Accept the values from user and store in the array  (main)
// Step4: Pass that array and size to the function(Logic) (Helper Function)
// Step5: Deallocate the memory of that array (main)