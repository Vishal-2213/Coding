//Array  concept 
#include<stdio.h>
void Display(int Arr[])
{   
     int i=0;
     printf("Elements of array are : \n");
     for(i=0;i<5;i++)
    {
        printf("%d \n",Arr[i]);
    }
}
int main()
{
    auto int Brr[5];
    register int i=0;
    
    printf("Enter elements :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d\n",&Brr[i]);
    }
    Display(Brr); //Display(100) 100 is base address which is imaginary
    return 0;
}



//Arr[2];
//*(Arr+2);
//*(2+Arr);
//2[Arr];