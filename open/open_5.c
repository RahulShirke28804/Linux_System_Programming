/*
This C program demonstrates basic file handling using the open() and close() system calls. 
It creates (or truncates) a file named Second.c with full permissions using the O_CREAT and O_TRUNC flags, 
reports whether the operation was successful, and then closes the file descriptor.
*/

#include <fcntl.h>
#include<stdio.h>
#include <unistd.h>

int main()
{
    int fd = 0;
    fd = open("Second.c",O_CREAT | O_TRUNC,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd %d\n",fd);
    }

    close(fd);

    return 0;
}
