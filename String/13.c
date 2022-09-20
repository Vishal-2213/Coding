//Accept character from user. If it is capital then display all the characters from the input character till Z. If input is small then print all characters in reverse order till a. In other case return directly.
//works
#include <stdio.h>

void Display(char ch)
{
    int i=0;
    if(ch>=65 && ch<=90)
    {        
        for(i=ch;i<=90;i++) 
        {
            printf("%c ",i);
        } 
    }
    else if(ch>=97 && ch<=122)
    { 
        for (i=ch;i>=97;i--)
        {
             printf("%c ",i);
        }
    }
    else
    {
        printf("%c",ch);
    }
    
}

int main() 
{
    char cValue;

    printf("Enter character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}