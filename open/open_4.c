/*
This C program demonstrates file creation and truncation using the open() system call with the O_CREAT and O_TRUNC flags. 
It attempts to create (or recreate) a file named Second.c with full permissions (0777), truncating it to zero length 
if it already exists, and prints the resulting file descriptor.
*/

#include <fcntl.h>
#include<stdio.h>

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

    return 0;
}
