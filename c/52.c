//Array  concept 
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{   
     int i=0;
     printf("Elements of array are : \n");
     for(i=0;i<iLength;i++)
    {
        printf("%d \n",Arr[i]);
    }
}
int main()
{
    //auto int Brr[5];  static memory allocation
    int *ptr=NULL;
    register int i=0;
    int iSize=0;

    printf("Enter the number of elements :\n"); 
    scanf("%d",&iSize);

    ptr= (int *)malloc(iSize * sizeof(int)); //allocation of memory

    printf("Enter elements :\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d\n",&ptr[i]);
    }
    Display(ptr, iSize); //Display(100) 100 is base address which is imaginary
    free(ptr); //deallocating memory
    return 0;
}


