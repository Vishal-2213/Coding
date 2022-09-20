//Check whether entered character is vowel or not
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckVowel(char cValue) 
{ 
if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue=='u' && cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue=='U')
{
    return TRUE;
}
else 
{
    return FALSE;
}
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet==true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0;

}