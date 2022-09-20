//WAP  which accepts string from user and coun number of small characters
//works
#include<stdio.h>
#include<iostream>
using namespace std;

int CountSmall(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>=97 && *str<=122)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    

}
int main()
{
    char arr[20];
    int iRet= 0;

   
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    iRet=CountSmall(arr);

    printf("Count is : %d",iRet);

    return 0;

}