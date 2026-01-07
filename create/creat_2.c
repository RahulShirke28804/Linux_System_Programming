/*
    This C program shows how to create a file using the creat() system call with a filename passed as a command-line argument. 
    It creates the specified file with full permissions (0777) and displays the resulting file descriptor or an error message if creation fails.
*/    
#include<fcntl.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
    int fd = 0;

    fd = creat(argv[1],0777);

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
