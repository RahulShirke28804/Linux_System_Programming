/*
This C program demonstrates basic file handling using the open() system call. 
It tries to open a file named Second.c in read–write mode and displays whether 
the file was opened successfully along with the returned file descriptor.
*/

#include <fcntl.h>
#include<stdio.h>

int main()
{
    int fd = 0;
    fd = open("Second.c",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened with fd %d\n",fd);
    }

    return 0;
}
