//Accept character from user and check whether it is special symbol or not (! , @ , # , $ , % , ^ , & ,*)
//works
#include <stdio.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch == '@' || ch == '#' || ch == '!' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    char cValue='\0';
    BOOL bRet= FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet= ChkSpecial(cValue);

    if(bRet==TRUE)
    {
        printf("It is Special Chracter\n");
    }
    else
    {
        printf("It is not Special Chracter\n");
    }
    return 0;
}