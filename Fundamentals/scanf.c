/*
    This is a program to explore the usage of the scanf() function
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Age = %d\n", age);
    
    return 0;
}