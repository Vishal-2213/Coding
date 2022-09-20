//Pattern A-19
//works
/*
    1   2   3   4   5
   -1  -2  -3  -4  -5
    1   2   3   4   5
   -1  -2  -3  -4  -5

*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
 int i=0;
 int j=0;
 int iNo;

 for(i=1;i<=iRow;i++)
 {
    if(i%2==1){iNo=1;}
    else{ iNo=-1;}
    for(j=1;j<=iCol;j++) 
    {
        printf("%d\t", iNo*j);
    }
    printf("\n");   
 }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Row: ");
    scanf("%d",&iValue1);

    printf("Enter Column: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}