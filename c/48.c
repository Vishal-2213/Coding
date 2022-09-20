//Array n pointer concept from here
#include<stdio.h>
void Display(int *ptr)
{   
     int i=0;
     printf("Enter elements :\n");
     for(i=0;i<5;i++)
    {
        printf("%d \n",*ptr);
        ptr++; //this is pointer arithmetic
    }
}
int main()
{
    //Array is one dimensional array
    //which contains 5 elements
    //and each element is of type int
    auto int Arr[5];
    register int i=0;
    
    printf("Elements of array are : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d\n",&Arr[i]);
    }
    Display(Arr); //Display(100) 100 is base address which is imaginary
    return 0;
}