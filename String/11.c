//WAP which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
//works
#include <stdio.h>

void DisplayASCII()
{
    int i=0;
    for (i=0;i<=255;i++)
    {
        printf("Decimal : %d\n",i);
        printf("Octal : %o\n",i);
        printf("Hexadecimal : %x\n",i);
        printf("Character : %c\n",i);
        
        printf("--------------------------------------------\n");
    }
   
}

int main()
{
    DisplayASCII();

    return 0;
}