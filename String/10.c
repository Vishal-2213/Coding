//Accept division of student from user and depends on the dividion display exam timing . There are 4 dividions in school as A,B,C,D. Exam of divison A at 7AM, B at 8:30AM, C at 9:20AM, D at 10:30AM (application should be case insensitive)
//works
#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv =='A' || chDiv== 'a')
    {
        printf("Your exam at 7AM");
    }
    else if(chDiv =='B' || chDiv== 'b')
    {
        printf("Your exam at 8:30AM");   
    }
    else if(chDiv =='C' || chDiv== 'c')
    {
        printf("Your exam at 9:20AM");   
    }
    else if(chDiv =='D' || chDiv== 'd')
    {
        printf("Your exam at 10:30AM");   
    }
    else
    {
        printf("Please enter valid division!!");
    }
}

int main() 
{
    char cValue='\0';

    printf("Enter your division: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}