/*
    This C program illustrates how command-line arguments are accessed using argc and argv. 
    It prints the total number of arguments passed to the program and then displays the 
    executable name along with the first two command-line arguments.
*/
#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of command line args are : %d\n",argc);
    printf("%s\n",argv[0]);
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);

    return 0;
}
