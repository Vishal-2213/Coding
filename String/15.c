//Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//works
#include <stdio.h>
void Display(char ch)
{
    if(ch >=65 && ch<=90 || ch>=97 && ch<=122)
    {
        printf("Decimal : %d\n",ch);
        printf("Hexadecimal : %X\n",ch);
        printf("Character : %c\n",ch);
        printf("Octal : %o\n",ch);
    }
}
int main ()
{
    char cValue;

    printf("Enter character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}