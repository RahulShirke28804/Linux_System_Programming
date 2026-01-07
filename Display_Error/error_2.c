/*
    This C program illustrates how errno is set when a system call fails. 
    It attempts to open a file named Marvellous.txt in read-only mode, prints 
    the returned file descriptor value, and then displays the corresponding errno value.
*/
#include<stdio.h>
#include<errno.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);
    
    printf("Value of fd is : %d\n",fd);
    printf("Value of errno is : %d\n",errno);

    return 0;
}
