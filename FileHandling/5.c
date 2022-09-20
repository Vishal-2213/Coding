//count number of White spaces  from file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountSpaces(char Fname[])
{
    char Data[FILESIZE];     // Mug
    int fd = 0;     // File descriptor(it's like handle)
    int iRet = 0,i=0, iCnt=0;
    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  // Failure
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i=0;i<iRet;i++)
        {
            if(Data[i]==' ')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char Fname[20];
    int iRet=0;
    printf("Enter file name to open\n");
    scanf("%s",Fname);

    iRet=CountSpaces(Fname);
    printf("Length of White spaces is : %d\n", iRet);

    return 0;
}
