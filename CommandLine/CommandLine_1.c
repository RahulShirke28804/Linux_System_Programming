/*
    This C program demonstrates the use of command-line arguments. 
    It prints the total number of arguments passed to the program (argc) 
    and displays the program’s executable name using argv[0].
*/
#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of command line args are : %d\n",argc);
    printf("%s\n",argv[0]);

    return 0;
}
