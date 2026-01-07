/*
    This C program demonstrates the use of the global variable errno. 
    It simply prints the current value of errno to show how the error 
    indicator is stored and accessed in C programs.
*/
#include<stdio.h>
#include<errno.h>

int main()
{
    printf("Demonstration of errno : \n");
    printf("%d\n",errno);

    return 0;
}   
