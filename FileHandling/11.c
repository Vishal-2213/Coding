#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h> //creat in this header file - allows read or write lock

int main()
{
    char Fname[20];
    int fd = 0;     // File descriptor

    printf("Enter file name to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;  // Failure
    }

    printf("File is succefully created with FD %d\n",fd);

    return 0;
}