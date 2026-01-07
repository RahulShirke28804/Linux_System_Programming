/*
    This C program demonstrates appending data to a file using the O_APPEND flag. 
    It opens Demo.txt in append mode and writes the string "Indiaismycountry" to 
    the end of the file, ensuring that the existing content is preserved.
*/
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Buffer[] = "Indiaismycountry";
    int iRet = 0;

    fd = open("Demo.txt",O_WRONLY | O_APPEND);

    if(fd < 0)
    {
        printf("Unable to open the file");
        printf("Reason : %s\n",strerror(errno));
        return -1;
    }

    printf("File successfully opened with fd : %d\n",fd);

    iRet = write(fd, Buffer, 16);           // Overwrite issue

    printf("%d bytes gets successfully written\n",iRet);

    close(fd);

    return 0;
}
