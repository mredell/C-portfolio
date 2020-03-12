/*
    This is a program to explore the usage of characters.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    /*
    printf("Character is: %c\n", ch);
    printf("Enter a character: \n");
    char another;
    // scanf("%c", &another);
    another = getchar();
    printf("You have typed: %c\n", another);
    */

    /*printf("%d - %c\n", ch, ch);
    int i = 65;
    for(i=65;i<91;i++)
        printf("%d - %c\n", i, i);
    */
    printf("Enter an alphabetic character: ");
    scanf("%c", &ch);

    if (ch>='A' && ch<='Z'){
        ch = ch + 32;
        printf("The corresponding lower case is: %c\n", ch);
    }
    else if (ch>='a' && ch<='z'){
        ch = ch - 32;
        printf("The corresponding upper case is: %c\n", ch);
    }
    else{
        printf("The given character is not alphabetic!");
    }
    
    return 0;
}