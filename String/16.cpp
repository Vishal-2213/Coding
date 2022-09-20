//WAP  which accepts string from user and coun number of capital characters
#include<stdio.h>
#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str>=65 && *str<=90)
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

    iRet=CountCapital(arr);

    printf("Count is : %d",iRet);

    return 0;

}