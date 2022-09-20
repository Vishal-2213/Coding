//Pattern printing-16 
// Row =4 , Column =4 
/*

*   *   *   *
*   &   &   *
*   &   &   *
*   *   *   *

*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i=0,j=0;    
    for(i=1;i<=iRow;i++) //outer 
    {
        for(j=1;j<=iCol;j++) //inner
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("&\t");
            }
        }
        printf("\n");
    }  
}
int main()
{
    int iValue1=0, iValue2=0;
    printf("Please enter the value of Row :\n");
    scanf("%d",&iValue1);

    printf("Please enter the value of Column :\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    return 0;
}