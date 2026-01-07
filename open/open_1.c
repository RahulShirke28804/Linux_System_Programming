/*
This C program demonstrates basic file handling using the open() system call. 
It attempts to open a file named First.c in read–write mode and prints whether 
the operation was successful along with the file descriptor value.
*/

#include <fcntl.h>
#include<stdio.h>

int main()
{
    int fd = 0;
    fd = open("First.c",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened with fd : %d\n",fd);
    }

    return 0;
}
