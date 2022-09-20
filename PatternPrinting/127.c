//Pattern A-18
//works
/*
  a   b   c   d
  1   2   3   4
  a   b   c   d
  1   2   3   4 
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i=0,j=0;
    char ch='\0';
    for(i=1;i<=iRow;i++)
    {
        ch='a';
        int iNo=1;
        for(j=1;j<=iCol;j++,ch++,iNo++)
        {
            
           if(i%2==1)
           {
               printf("%c\t", ch);
           }
           else
           {
                printf("%d\t",iNo);
           }     
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