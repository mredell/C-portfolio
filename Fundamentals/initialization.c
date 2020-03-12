/*
    This is a program for detailing the initialization of variables.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aVar = 0xa; // 0 -> 'octal', 0x -> 'hexadecimal'
    printf("Content of aVar = %d\n", aVar);
    printf("Content of aVar = %o\n", aVar);
    printf("Content of aVar = %x\n", aVar);
    return 0;
}