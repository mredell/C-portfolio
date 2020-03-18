/*
    This is a program to explore the usage of the scanf() function
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    // printf("Enter age: ");
    // scanf("%d", &age);
    // printf("Age = %d\n", age);
    int x, y, i;
    printf("Enter two integers: ");
    i = scanf("%d %d", &x, &y);

    printf("x = %d, y = %d, i = %d\n", x, y, i);

    
    return 0;
}