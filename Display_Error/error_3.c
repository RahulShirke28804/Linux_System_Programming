/*
    This C program demonstrates how to convert an error number into a human-readable message. 
    After attempting to open Marvellous.txt in read-only mode, it prints the file descriptor, 
    the errno value, and the corresponding error message using strerror().
*/
#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);
    
    printf("Value of fd is : %d\n",fd);
    printf("Value of errno is : %d\n",errno);
    printf("Error statement : %s\n",strerror(errno));

    return 0;
}
