/*
    This C program demonstrates basic file creation using the creat() system call. 
    It attempts to create a file named LSP.txt with full permissions (0777) and 
    prints whether the operation was successful along with the returned file descriptor.
*/
#include<fcntl.h>
#include<stdio.h>

int main()
{
    int fd = 0;

    fd = creat("LSP.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd : %d\n",fd);
    }

    return 0;
}
