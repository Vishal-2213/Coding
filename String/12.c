//Accept a character from user. If character is small display its coresponding capital character, and if small then capital and in other case display as it is.
//works
#include <stdio.h>

void Display(char ch)
{
    if(ch >=65 && ch <=90)
    { 
        printf("%c",ch+32);
    }
    else if(ch >=97 && ch<=122)
    { 
        printf("%c", ch-32);
    }
    else
    {
        printf("%c", ch);
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