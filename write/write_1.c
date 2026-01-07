/*
    This C program demonstrates writing data to a file using the write() system call. 
    It opens Demo.txt in write-only mode, writes the first 10 characters from a buffer 
    containing the English alphabet, reports the number of bytes written, and then closes the file.
*/
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Buffer[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int iRet = 0;

    fd = open("Demo.txt",O_WRONLY);

    if(fd < 0)
    {
        printf("Unable to open the file");
        printf("Reason : %s\n",strerror(errno));
        return -1;
    }

    printf("File successfully opened with fd : %d\n",fd);

    iRet = write(fd, Buffer, 10);

    printf("%d bytes gets successfully written\n",iRet);

    close(fd);

    return 0;
}
