//Pattern A-12
/*
    A B C D
    a b c d
    A B C D
    a b c d
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
 int i=0;
 int j=0;
 char ch='\0';

 for(i=1;i<=iRow;i++)
 {
    if(i%2==1){ch='A';}
    else{ ch='a';}
    for(j=1;j<=iCol;j++,ch++) 
    {
        printf("%c\t", ch);
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