/*
This C program demonstrates file creation using the open() system call with the O_CREAT flag. 
It attempts to create a file named Second.c with full permissions (0777) and 
prints whether the creation was successful along with the file descriptor value.
*/
#include <fcntl.h>
#include<stdio.h>

int main()
{
    int fd = 0;
    fd = open("Second.c",O_CREAT,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd %d\n",fd);
    }

    return 0;
}
