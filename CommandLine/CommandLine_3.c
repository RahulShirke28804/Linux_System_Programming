/*
    This C program demonstrates iterating through command-line arguments using argc and argv. 
    It first prints the total number of arguments passed to the program, and then displays 
    each argument one by one using a loop.
*/
#include<stdio.h>

int main(int argc, char *argv[])
{
    int iCnt = 0;

    printf("Number of command line args are : %d\n",argc);
    
    for(iCnt = 0; iCnt < argc; iCnt++)
    {
        printf("%s\n",argv[iCnt]);
    }

    return 0;
}
