/*
    This is a program showing how to print the contents of a variable using printf()
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id = 5;
    int age = 20;
    double weight = 50.75;
    char grade = 'A';

    printf("The content of ID is: %d, age = %d, weight = %f\n", id, age, weight);

    return 0;
}